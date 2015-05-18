// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wcin.imbue(currentLoc);
  wcout.imbue(currentLoc);

  wifstream ifs("in.dat", ios_base::binary);
  ifs.imbue(currentLoc);
  vector<wchar_t> data{istreambuf_iterator<wchar_t>(ifs), istreambuf_iterator<wchar_t>()};

  wofstream ofs("out.dat", ios_base::binary);
  ofs.imbue(currentLoc);
  copy(data.cbegin(), data.cend(), ostreambuf_iterator<wchar_t>(ofs));
}
