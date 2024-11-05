// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <complex>

using namespace std;

int main() {
  complex<double> c1{1, 1};
  complex<double> c2{2, 2};

  c1 += c2;
  cout << "+= : " << c1 << endl;

  c1 -= c2;
  cout << "-= : " << c2 << endl;

  complex<double> r1 = c1 + c2;
  cout << "+ : " << r1 << endl;

  complex<double> r2 = c2 - c1;
  cout << "- : " << r2 << endl;

  complex<double> r3 = c1 * c2;
  cout << "* : " << r3 << endl;

  complex<double> r4 = c2 / c1;
  cout << "/ : " << r4 << endl;

  complex<double> r5 = c1 * 3.0;
  cout << "* double : " << r5 << endl;
}

/*
output:
+= : (3,3)
-= : (2,2)
+ : (3,3)
- : (1,1)
* : (0,4)
/ : (2,0)
* double : (3,3)
*/