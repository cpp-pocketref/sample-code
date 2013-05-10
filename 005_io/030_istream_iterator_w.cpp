// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iterator>
#include <vector>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wcin.imbue(currentLoc);
  wcout.imbue(currentLoc);

  typedef istream_iterator<wstring, wchar_t> iter_type;
  vector<wstring> input{iter_type(wcin), iter_type()};

  for (const wstring& s : input) {
    wcout << s << endl;
  }
}
