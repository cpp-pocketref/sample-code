// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <atomic>
#include <thread>

using namespace std;

int x;
atomic<bool> ay;

// 値の書き込みを行う
void foo() {
  x = 10;
  ay.store(true, memory_order_release);
}

// 値の読み込みを行う
void bar() {
  bool y;
  do {
    y = ay.load(memory_order_acquire);
  } while (!y);
  cout << x << endl; // 必ず10が出力される
}

int main() {
  thread th1{foo};
  thread th2{bar};
  th1.join();
  th2.join();
}