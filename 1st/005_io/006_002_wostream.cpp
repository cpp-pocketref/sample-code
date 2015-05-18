// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  wstring s = L"りんご";
  wcout << s << endl;
}
