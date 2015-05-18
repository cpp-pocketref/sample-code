// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <fstream>
#include <iterator>
#include <vector>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");

  vector<wchar_t> data{L'A', L'B', L'C', L'\n'};
  wofstream ofs("out.dat");
  ofs.imbue(currentLoc);
  copy(data.cbegin(), data.cend(), ostreambuf_iterator<wchar_t>(ofs));
}
