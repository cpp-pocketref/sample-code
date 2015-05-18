// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  wcout << showpos << -7 << L' ' << 0 << L' ' << 7 << endl;
  wcout << noshowpos << -7 << L' ' << 0 << L' ' << 7 << endl;
}
