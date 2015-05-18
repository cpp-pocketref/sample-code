// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

static mutex mtx;

void bar(size_t n) {
  static        int sn = 0;
  thread_local  int tn = 0;
  int               an = 0;

  mtx.lock();
  sn += n;
  tn += n;
  an += n;

  cout << "static int : " << sn << ", "
       << "thread_local int : " << tn << ", "
       << "int : " << an << endl;
  mtx.unlock();
}

void foo() {
  for (int i = 0; i < 3; ++i) {
    bar(1);
  }
}

int main() {
  vector<thread> ths;

  for (size_t i = 0; i < 2; ++i) {
    ths.push_back(thread(foo));
  }

  for (thread& th : ths) {
    th.join();
  }
}
