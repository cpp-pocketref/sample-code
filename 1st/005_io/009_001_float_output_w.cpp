// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <locale>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  double x = 123.45;
  double y = 7.89e10;

  wcout << L"---- 標準 (defaultfloat) ----" << endl;
  wcout << x << endl;
  wcout << y << endl;

  wcout << L"---- fixed ----" << endl;
  wcout << fixed;
  wcout << x << endl;
  wcout << y << endl;

  wcout << L"---- scientific ----" << endl;
  wcout << scientific;
  wcout << x << endl;
  wcout << y << endl;

  wcout << L"---- hexfloat ----" << endl;
  wcout << hexfloat;
  wcout << x << endl;
  wcout << y << endl;

  wcout << L"---- defaultfloat ----" << endl;
  wcout << defaultfloat;
  wcout << x << endl;
  wcout << y << endl;
}
