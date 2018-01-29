// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <complex>

using namespace std;

int main() {
  complex<double> c(12.34, 56.78);
  complex<double> result = cos(c);

  cout << result << endl;
}

/*
output:
(2.22324e+024,5.12053e+023)
*/

