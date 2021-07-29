// Copyright (c) 2012-2020
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

  // 文字列オブジェクトのコピーを代入
  string b;
  b = a;

  // 文字列オブジェクトをムーブ代入
  string c0 = "world";
  string c = move(c0);

  cout << "a:" << a << endl;
  cout << "b:" << b << endl;
  cout << "c:" << c << endl;
}