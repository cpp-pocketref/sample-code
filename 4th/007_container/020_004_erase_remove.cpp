// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7};

  // 偶数要素を削除する
  v.erase(remove_if(v.begin(),
                    v.end(),
                    [](int n) { return n % 2 == 0; }),
          v.end());

  for (int x : v) {
    cout << x << endl;
  }
}
