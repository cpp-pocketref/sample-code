// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  string x = "abcabxabcc";

  // 文字列内の指定した文字列を検索する
  cout << x.find("abx") << endl;

  // 文字列内の指定した文字を検索する
  cout << x.find('c') << endl;

  // 見つかったかどうかを判定する
  if (x.find("cc") != string::npos) {
    cout << "見つかった" << endl;
  }
}