// Copyright (c) 2012-2015
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5};

  // 全ての要素を8で埋める
  fill(v.begin(), v.end(), 8);

  // 先頭3要素を9で埋める
  fill_n(v.begin(), 3, 9);

  for (int x : v) {
    cout << x << endl;
  }
}
