// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

void print(const vector<int>& v) {
  for (int x : v) {
    cout << x << ' ';
  }
  cout << endl;
}

int main() {
  vector<int> v = {8, 1, 3, 7, 0, 6, 2, 4, 5};

  // 先頭から4要素をソート済み状態にする
  partial_sort(v.begin(), next(v.begin(), 4), v.end());
  print(v);

  // 全体をソートする
  sort(v.begin(), v.end());
  print(v);
}