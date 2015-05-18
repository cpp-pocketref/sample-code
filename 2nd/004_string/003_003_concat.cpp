// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  string a = "hello";
  string b = " world";

  // 文字列オブジェクト同士を連結
  string c = a + b;

  // 文字列オブジェクトと文字配列を連結
  string d = a + " world";
  string e = "hello" + b;

  // 文字列オブジェクトと文字を連結
  string f = a + '!';

  cout << "c:" << c << endl;
  cout << "d:" << d << endl;
  cout << "e:" << e << endl;
  cout << "f:" << f << endl;
}
