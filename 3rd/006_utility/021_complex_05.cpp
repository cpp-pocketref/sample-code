// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <complex>
using std::cout;
using std::endl;

int main()
{
  using namespace std::complex_literals;

  // 実部0.0、虚部1.0のcomplex<double>型オブジェクトを作る
  auto c = 1.0i;

  cout << c << endl;
}

/*
output:
(0,1)
*/

