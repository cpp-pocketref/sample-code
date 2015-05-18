// Copyright (c) 2012-2015
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wcin.imbue(currentLoc);
  wcout.imbue(currentLoc);

  vector<wstring> input;

  wstring line;
  while (getline(wcin, line)) {
    input.push_back(move(line));
  }

  for (const wstring& s : input) {
    wcout << s << endl;
  }
}
