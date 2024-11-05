// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
  system_clock::time_point p = system_clock::now() + seconds{10};

  cout << "start" << endl;

  // 10秒間待機する
  while (p > system_clock::now()) {
  }

  cout << "end" << endl;
}