// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <cmath>

template <class T>
constexpr T pi() {
  return 3.141592653589793238463L;
}

using namespace std;

int main() {
  cout << "theta\tsin\t\tcos" << endl;
  cout << setprecision(3) << fixed;

  for (int i = 0; i < 13; ++i) {
    double theta = i * 15;
    double s = sin(theta * pi<double>() / 180.0);
    double c = cos(theta * pi<double>() / 180.0);

    cout << theta << '\t' << s << '\t' << c << endl;
  }
}
