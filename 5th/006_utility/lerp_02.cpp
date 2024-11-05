// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double start = 0.0;
  double end = 100.0;

  for (double t = 0.0; t <= 1.0; t += 0.1) {
    cout << lerp(start, end, t) << endl;
  }
}