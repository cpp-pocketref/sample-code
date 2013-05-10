// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <string>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wcin.imbue(currentLoc);
  wcout.imbue(currentLoc);

  wstring s = L" A  Z";

  wcout << L"skipws:" << endl;
  wistringstream s1(s);
  wchar_t cs[2];
  s1 >> cs[0] >> cs[1];
  for (wchar_t c : cs) {
    wcout << L'"' << c << L'"' << endl;
  }

  wcout << L"noskipws:" << endl;
  wistringstream s2(s);
  wchar_t cns[5];
  s2 >> noskipws >> cns[0] >> cns[1] >> cns[2] >> cns[3] >> cns[4];
  for (wchar_t c : cns) {
    wcout << L'"' << c << L'"' << endl;
  }
}
