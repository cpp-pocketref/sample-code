// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
  map<string, int> m = {
    {"a", 3},
    {"b", 1},
    {"c", 4},
  };

  // キー"b"をもつ要素を検索する
  auto b = m.find("b");
  if (b != m.cend()) {
    cout << b->second << endl; // キーに対応する値を取得
  }
  else {
    cout << "見つからなかった" << endl;
  }

  // キー"d"をもつ要素が含まれているか判定する
  if (m.contains("d")) {
    cout << "見つかった" << endl;
  }
  else {
    cout << "見つからなかった" << endl;
  }
}