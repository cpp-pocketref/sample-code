// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x = pow(2.0, 3.0); // 2の3乗
  cout << x << endl;

  double y = pow(2.0, 0.0); // 2の0乗
  cout << y << endl;

  double z = pow(2.0, -1.5); // 2の-1.5乗
  cout << z << endl;
}
