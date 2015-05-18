// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <locale>
#include <string>

using namespace std;

int main() {
  locale currentLoc("");
  wcin.imbue(currentLoc);
  wcout.imbue(currentLoc);

  wstring s;
  long double x;

  wcin >> get_money(s, false);
  wcin >> get_money(x, false);

  wcout << s << endl;
  wcout << x << endl;

  wcin >> get_money(s, true);
  wcin >> get_money(x, true);

  wcout << s << endl;
  wcout << x << endl;
}
