// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wcin.imbue(currentLoc);
  wcout.imbue(currentLoc);

  wchar_t c;
  int i;
  wstring s;
  wcin >> c;
  wcin >> i;
  wcin >> s;
  // 上の3行は、次のようにも書けます。
  // wcin >> c >> i >> s;
  wcout << c << endl;
  wcout << i << endl;
  wcout << s << endl;
}
