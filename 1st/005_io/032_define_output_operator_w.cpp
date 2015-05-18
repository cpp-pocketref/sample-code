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
std::basic_ostream<CharT, Traits>&
operator<<(std::basic_ostream<CharT, Traits>& os, const MyPoint& pt) {
  os << pt.x << ' ' << pt.y;
  return os;
}

int main() {
  wcout.imbue(locale(""));

  MyPoint pt{10, 20};
  wcout << pt << endl;
}
