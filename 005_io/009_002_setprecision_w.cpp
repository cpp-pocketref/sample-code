// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  double x = 1. / 3.;
  wcout << setprecision(4) << x << endl;
  wcout << setprecision(6) << x << endl;
  wcout << setprecision(8) << x << endl;

  wcout << L"----" << endl;

  double y = 1234.;
  wcout << setprecision(5) << y << endl;
  wcout << setprecision(4) << y << endl;
  wcout << setprecision(3) << y << endl;
}
