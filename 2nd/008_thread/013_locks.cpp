// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <functional> // ref

using namespace std;
void computeSomething() {}

void foo(mutex& m) {
  {
    lock_guard<mutex> lock(m); //ここからロック
    computeSomething();
  } //スコープを抜けたらロック解除
  //ここはロックされていない
}

void bar(mutex& m, int n) {
  unique_lock<mutex> ul(m, defer_lock);
  //この時点ではまだロックをかけていない
  for (;;) {
    if (ul.try_lock()) {

      cout << "ロック成功 : " << n << endl;
      computeSomething();

      return;
    }
    else {
      this_thread::yield();
    }
  }
}

int main() {
  mutex m;
  thread th1(foo, ref(m));
  thread th2(foo, ref(m));

  th1.join();
  th2.join();

  vector<thread> ths;
  for (int i = 0; i < 4; ++i) {
    ths.push_back(thread(bar, ref(m), i));
  }

  for (thread& th: ths) {
    th.join();
  }
}
