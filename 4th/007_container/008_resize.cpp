// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> v;

  // 要素数を0から2に拡張
  // 追加する要素の値を"C++"に設定
  v.resize(2, "C++");

  // 要素数を2から5に拡張(空文字列が追加される)
  v.resize(5);

  for (const string& s : v) {
    cout << '[' << s << ']' << endl;
  }

  cout << v.size() << endl;
}
