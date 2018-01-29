// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <algorithm>

using namespace std;

struct Greater {
  template <class T>
  bool operator()(const T& a, const T& b) const {
    return a > b;
  }
};

int main() {
  cout << max(3, 1) << endl;      // 2引数バージョン
  cout << max({3, 1, 4}) << endl; // N要素バージョン

  // 比較関数を指定するバージョン
  cout << max(3, 1, Greater()) << endl;
  cout << max({3, 1, 4}, Greater()) << endl;
}
