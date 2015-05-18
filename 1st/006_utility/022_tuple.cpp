// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {
  // 初期値の設定
  tuple<int, char, string> t(1, 'a', "hello");

  // まとめて値を設定する
  t = make_tuple(2, 'b', "world");

  // 値を参照する
  cout << get<0>(t) << endl;
  cout << get<1>(t) << endl;
  cout << get<2>(t) << endl;
}
