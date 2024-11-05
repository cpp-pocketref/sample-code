// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>

using namespace std;

void print_bool(bool b) {
  if (b) { cout << "true" << endl; }
  else { cout << "false" << endl; }
}

int main() {
  vector<int> v;

  // まだ要素がない
  print_bool(v.empty());

  v.push_back(1); // 要素を追加
  print_bool(v.empty());

  v.pop_back(); // 追加した要素を削除
  print_bool(v.empty());
}