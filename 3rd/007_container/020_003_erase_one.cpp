// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = {0, 1, 2};

  // 1番目の要素を削除
  v.erase(v.begin() + 1);

  for (int x : v) {
    cout << x << endl;
  }
}
