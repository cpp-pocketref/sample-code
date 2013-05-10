// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wclog.imbue(currentLoc);
  wcerr.imbue(currentLoc);

  wclog << L"これはエラー出力です。" << endl;
  wcerr << L"これもエラー出力です。" << endl;
}
