// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <complex>

using namespace std;

int main() {
  {
    // 初期値の設定
    complex<double> c(12.34, 56.78);

    // 再設定
    double r = real(c); // c1.real()でもOK
    double i = imag(c); // c1.imag()でもOK

    cout << "real:" << r << endl;
    cout << "imag:" << i << endl;
  }
  {
    complex<double> c;
    cout << c << endl;
  }
  {
    complex<double> c(12.34, 56.78);
    cout << c << endl;
  }
  {
    complex<double> c;
    c.real(12.33);
    c.imag(56.78);
    cout << c << endl;
  }
  {
    complex<double> c(12.34, 56.78);
    cout << c.real() << endl;
    cout << c.imag() << endl;
  }
}

/*
output:
real:12.34
imag:56.78
(0,0)
(12.34,56.78)
(12.33,56.78)
12.34
56.78
*/

