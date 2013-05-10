// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
  vector<int> src = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> dst;

  copy_if(src.begin(), src.end(),
          back_inserter(dst),
          [](int n) { return n % 3 == 0; });

  for (int x : dst) {
    cout << x << endl;
  }
}
