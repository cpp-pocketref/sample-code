// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int x = 3;

  // xの値を0-2の範囲内に収める
  int y = clamp(x, 0, 2);
  cout << y << endl;
}
