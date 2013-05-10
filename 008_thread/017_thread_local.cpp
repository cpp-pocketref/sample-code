// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <future>
#include <utility>
#include <vector>

// todo gcc 4.8で検証する
#define thread_local __thread

using namespace std;

static mutex mtx;

void bar(size_t n) {
  static        size_t  sn = 0;
  thread_local  size_t  tn = 0;
  size_t                an = 0;

  mtx.lock();
  sn += n;
  tn += n;
  an += n;

  cout << "static int : " << sn << endl;
  cout << "thread_local int : " << tn << endl;
  cout << "int : " << an << endl;
  mtx.unlock();
}

void foo() {
  for(size_t i = 0; i < 3; ++i) {
    bar(1);
  }
}

int main() {
  vector<thread> ths;

  for (size_t i = 0; i < 4; ++i) {
    ths.push_back(thread(foo));
  }

  for (thread& th : ths) {
    th.join();
  }
}
