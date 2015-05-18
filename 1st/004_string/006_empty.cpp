// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  cout << boolalpha;

  // デフォルト構築状態は空
  string s;
  cout << "empty? :" << s.empty() << endl;

  // 何らかの文字列が格納されている
  s = "hello";
  cout << "empty? :" << s.empty() << endl;

  // 文字列を空にした
  s.clear();
  cout << "empty? :" << s.empty() << endl;
}
