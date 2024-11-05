// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>

template <class T>
constexpr T my_pi() {
  return 3.141592653589793238463L;
}

using namespace std;
using namespace std::numbers;

int main() {
  cout << "theta\tsin\t\tcos" << endl;
  cout << setprecision(3) << fixed;

  for (int i = 0; i < 13; ++i) {
    double theta = i * 15;
    double s = sin(theta * pi_v<double> / 180.0);
    double c = cos(theta * pi_v<double> / 180.0);

    cout << theta << '\t' << s << '\t' << c << endl;
  }
}