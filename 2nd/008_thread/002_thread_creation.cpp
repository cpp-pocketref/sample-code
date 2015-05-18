// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <mutex>
#include <string>

using namespace std;

mutex printMutex_;
void print(const string& s) {
  lock_guard<mutex> lk(printMutex_);
  cout << s << endl;
}

struct Foo {
  void operator()() {
    print("mainとは別スレッドで実行されています");
  }
};

int main() {
  // Foo関数オブジェクトを別のスレッドで実行する
  Foo foo;
  thread th(foo);
  th.join();
}
