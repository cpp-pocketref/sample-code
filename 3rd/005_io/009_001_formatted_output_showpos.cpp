// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  cout << showpos << -7 << ' ' << 0 << ' ' << 7 << endl;
  cout << noshowpos << -7 << ' ' << 0 << ' ' << 7 << endl;
}
