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
std::basic_ostream<CharT, Traits>&
operator<<(std::basic_ostream<CharT, Traits>& os, const MyPoint& pt) {
  os << pt.x << ' ' << pt.y;
  return os;
}

int main() {
  MyPoint pt{10, 20};
  cout << pt << endl;
}
