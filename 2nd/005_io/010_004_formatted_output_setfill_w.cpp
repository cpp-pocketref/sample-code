// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  locale currentLoc(locale::classic(), "", locale::ctype);
  wcout.imbue(currentLoc);

  wcout << setfill(L'0');
  wcout << L'|' << setw(4) << 1 << L'|' << endl;
  wcout << L'|' << setw(4) << 12 << L'|' << endl;
  wcout << L'|' << setw(4) << 123 << L'|' << endl;
  wcout << L'|' << setw(4) << 1234 << L'|' << endl;
}
