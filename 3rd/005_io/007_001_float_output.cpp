// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  double x = 123.45;
  double y = 7.89e10;

  cout << "---- 標準 (defaultfloat) ----" << endl;
  cout << x << endl;
  cout << y << endl;

  cout << "---- fixed ----" << endl;
  cout << fixed;
  cout << x << endl;
  cout << y << endl;

  cout << "---- scientific ----" << endl;
  cout << scientific;
  cout << x << endl;
  cout << y << endl;

  cout << "---- hexfloat ----" << endl;
  cout << hexfloat;
  cout << x << endl;
  cout << y << endl;

  cout << "---- defaultfloat ----" << endl;
  cout << defaultfloat;
  cout << x << endl;
  cout << y << endl;
}
