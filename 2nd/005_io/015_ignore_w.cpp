// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wcin.imbue(currentLoc);
  wcout.imbue(currentLoc);

  int x;
  for (;;) {
    wcout << L"数値を入力してEnterを入力してください" << endl;
    if (wcin >> x) {
      break;
    }
    wcin.clear();
    wcin.ignore(numeric_limits<streamsize>::max(), L'\n');
  }
  wcout << x << L"が入力されました" << endl;
}
