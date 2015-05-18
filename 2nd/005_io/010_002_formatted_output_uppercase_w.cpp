// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  int x = 0x12ab;
  double y = 9.03e13;
  wcout << hex << boolalpha;
  wcout << L"---- uppercase ----" << endl;
  wcout << uppercase;
  wcout << x << endl;
  wcout << y << endl;
  wcout << true << endl; // 効果がない
  wcout << L"---- nouppercase ----" << endl;
  wcout << nouppercase;
  wcout << x << endl;
  wcout << y << endl;
  wcout << true << endl;
}
