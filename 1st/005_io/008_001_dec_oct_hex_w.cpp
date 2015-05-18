// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  int x = 16;

  wcout << L"---- 標準 (dec) ----" << endl;
  wcout << x << endl;

  wcout << L"---- oct ----" << endl;
  wcout << oct << x << endl;

  wcout << L"---- dec ----" << endl;
  wcout << dec << x << endl;

  wcout << L"---- hex ----" << endl;
  wcout << hex << x << endl;
}
