// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main() {
  // 初期値の設定
  pair<int, string> p(1, "hello");

  // まとめて値を設定する
  p = make_pair(2, "world");

  // 値を参照する
  cout << p.first << endl;
  cout << p.second << endl;
}
