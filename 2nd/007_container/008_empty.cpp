// Copyright (c) 2012-2015
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << boolalpha;

  vector<int> v;

  // まだ要素がない
  cout << v.empty() << endl;

  v.push_back(1); // 要素を追加
  cout << v.empty() << endl;

  v.pop_back(); // 追加した要素を削除
  cout << v.empty() << endl;
}
