// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>

using namespace std;

int main() {
  locale currentLoc("");
  wcin.imbue(currentLoc);
  wcout.imbue(currentLoc);

  wstring line;
  getline(wcin, line);

  wcout << line << endl;
}
