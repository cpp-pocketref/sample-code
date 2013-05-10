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

template <class T, class U>
void print(const pair<T, U>& p) {
  // firstに最小値、secondに最大値が入る
  cout << p.first << ", " << p.second << endl;
}

int main() {
  print(minmax(3, 1));      // 2引数バージョン
  print(minmax({3, 1, 4})); // N引数バージョン

  // 比較関数を指定するバージョン
  print(minmax(3, 1, Greater()));
  print(minmax({3, 1, 4}, Greater()));
}

