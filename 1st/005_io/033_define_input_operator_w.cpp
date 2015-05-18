// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <locale>

using namespace std;

struct MyPoint {
  int x;
  int y;
};

template<typename CharT, typename Traits>
std::basic_istream<CharT, Traits>&
operator>>(std::basic_istream<CharT, Traits>& is, MyPoint& pt) {
  is >> pt.x >> pt.y;
  return is;
}

int main() {
  locale currentLoc("");
  wcin.imbue(currentLoc);
  wcout.imbue(currentLoc);

  MyPoint pt = {};
  wcin >> pt;
  wcout << pt.x << L' ' << pt.y << endl;
}
