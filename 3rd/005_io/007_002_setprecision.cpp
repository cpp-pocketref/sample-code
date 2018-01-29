// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double x = 1. / 3.;
  cout << setprecision(4) << x << endl;
  cout << setprecision(6) << x << endl;
  cout << setprecision(8) << x << endl;

  cout << "----" << endl;

  double y = 1234.;
  cout << setprecision(5) << y << endl;
  cout << setprecision(4) << y << endl;
  cout << setprecision(3) << y << endl;
}
