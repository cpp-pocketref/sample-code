// Copyright (c) 2012-2015
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <locale>
#include <string>
#include <sstream>

using namespace std;

int main() {
  locale currentLoc("");
  cout.imbue(currentLoc);

  string sl, si;
  long double xl, xi;

  istringstream is_local("¥12345");
  is_local.imbue(currentLoc);

  is_local >> get_money(sl, false);
  is_local.clear();
  is_local.seekg(0, ios_base::beg); // 読み取り位置を先頭に移動
  is_local >> get_money(xl, false);

  cout << "---- intl: false, input: " << is_local.str() << "----" << endl;
  cout << sl << endl;
  cout << xl << endl;

  istringstream is_intl("JPY12,345");
  is_intl.imbue(currentLoc);

  is_intl >> get_money(si, true);
  is_intl.clear();
  is_intl.seekg(0, ios_base::beg); // 読み取り位置を先頭に移動
  is_intl >> get_money(xi, true);

  cout << "---- intl: true, input: " << is_intl.str() << "----" << endl;
  cout << si << endl;
  cout << xi << endl;
}
