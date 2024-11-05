// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
  multiset<int> s = {0, 0, 1, 1, 2, 2, 3, 3};
  s.erase(2);

  for (int x : s) {
    cout << x << endl;
  }
}