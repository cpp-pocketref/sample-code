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
  wcout.imbue(currentLoc);

  wstring sl, si;
  long double xl, xi;

  wistringstream is_local(L"¥12345");
  is_local.imbue(currentLoc);

  is_local >> get_money(sl, false);
  is_local.seekg(0, ios_base::beg); // 読み取り位置を先頭に移動
  is_local >> get_money(xl, false);

  wcout << "---- intl: false, input: " << is_local.str() << "----" << endl;
  wcout << sl << endl;
  wcout << xl << endl;

  wistringstream is_intl(L"JPY12,345");
  is_intl.imbue(currentLoc);

  is_intl >> get_money(si, true);
  is_intl.seekg(0, ios_base::beg); // 読み取り位置を先頭に移動
  is_intl >> get_money(xi, true);

  wcout << "---- intl: true, input: " << is_intl.str() << "----" << endl;
  wcout << si << endl;
  wcout << xi << endl;
}
