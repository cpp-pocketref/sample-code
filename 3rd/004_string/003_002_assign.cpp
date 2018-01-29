// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <utility>
#include <iostream>

using namespace std;

int main() {
  // 文字配列の代入
  string a;
  a = "hello";

  // 文字の代入
  string b;
  b = 'a';

  // 文字列オブジェクトのコピーを代入
  string c;
  c = a;

  // 文字列オブジェクトをムーブ代入
  string d0 = "world";
  string d = move(d0);

  // assign()メンバ関数による代入
  // 範囲をコピー
  string e;
  e.assign(d.begin(), d.end());

  cout << "a:" << a << endl;
  cout << "b:" << b << endl;
  cout << "c:" << c << endl;
  cout << "d:" << d << endl;
  cout << "e:" << e << endl;
}
