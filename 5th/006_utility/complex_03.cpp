// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <complex>

using namespace std;

template <class T>
constexpr T pi() {
  return 3.141592653589793238463L;
}

int main() {
  complex<double> c{-1, 1};

  // 絶対値を求める
  double r1 = abs(c);
  cout << "abs : " << r1 << endl;

  // 偏角を求める
  double r2 = arg(c);
  cout << "arg : " << r2 << endl;

  // ノルム(絶対値の2乗)を求める
  double r3 = norm(c);
  cout << "norm : " << r3 << endl;

  // 共役複素数(complex(real, -imag))を求める
  complex<double> r4 = conj(c);
  cout << "conj : " << r4 << endl;

  // 複素射影直線(リーマン球面への射影)を求める
  complex<double> r5 = proj(c);
  cout << "proj : " << r5 << endl;

  // 絶対値(第1実引数)と偏角(第2実引数)を指定し、極座標を計算する
  complex<double> r6 = polar(3.0, pi<double>() / 2.0);
  cout << "polar : " << r6 << endl;
}

/*
output:
abs : 1.41421
arg : 2.35619
norm : 2
conj : (-1,-1)
proj : (-1,1)
polar : (1.83691e-016,3)
*/