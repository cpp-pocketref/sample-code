// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
  // 精度の高い単位への変換(秒からミリ秒)
  milliseconds ms = seconds(3);
  cout << ms.count() << endl;

  // 精度の低い単位への変換(ミリ秒から秒)
  seconds s = duration_cast<seconds>(milliseconds(2300));
  cout << s.count() << endl;
}

