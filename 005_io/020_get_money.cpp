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
  cin.imbue(currentLoc);

  string s;
  long double x;

  cin >> get_money(s, false);
  cin >> get_money(x, false);

  cout << s << endl;
  cout << x << endl;

  cin >> get_money(s, true);
  cin >> get_money(x, true);

  cout << s << endl;
  cout << x << endl;
}
