// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <locale>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  wcout << L"こんにちは、世界" << endl;
}
