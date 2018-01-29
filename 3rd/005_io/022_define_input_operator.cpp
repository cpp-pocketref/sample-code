// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

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
  MyPoint pt = {};
  cin >> pt;
  cout << pt.x << ' ' << pt.y << endl;
}
