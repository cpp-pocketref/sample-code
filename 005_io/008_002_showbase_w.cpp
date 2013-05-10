// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  int x = 24;

  wcout << L"---- showbase ----" << endl;
  wcout << showbase;
  wcout << oct << x << endl;
  wcout << hex << x << endl;

  wcout << L"---- noshowbase ----" << endl;
  wcout << noshowbase;
  wcout << oct << x << endl;
  wcout << hex << x << endl;

  wcout << L"---- showbase (0) ----" << endl;
  wcout << showbase;
  wcout << oct << 0 << endl;
  wcout << hex << 0 << endl;
}
