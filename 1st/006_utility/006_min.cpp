// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

struct Greater {
  template <class T>
  bool operator()(const T& a, const T& b) const
  { return a > b; }
};

int main() {
  cout << min(3, 1) << endl;      // 2引数バージョン
  cout << min({3, 1, 4}) << endl; // N要素バージョン

  // 比較関数を指定するバージョン
  cout << min(3, 1, Greater()) << endl;
  cout << min({3, 1, 4}, Greater()) << endl;
}
