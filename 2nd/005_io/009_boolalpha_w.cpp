// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <locale>
#include <locale>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  wcout << L"---- 標準 (noboolalpha) ----" << endl;
  wcout << true << endl;
  wcout << false << endl;

  wcout << L"---- boolalpha ----" << endl;
  wcout << boolalpha;
  wcout << true << endl;
  wcout << false << endl;

  wcout << L"---- noboolalpha ----" << endl;
  wcout << noboolalpha;
  wcout << true << endl;
  wcout << false << endl;
}
