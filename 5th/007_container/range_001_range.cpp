// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  vector<char> v = {'B', 'E', 'Z', 'B'};

  // どちらも2が出力される
  cout << count(v.cbegin(), v.cend(), 'B') << endl;
  cout << ranges::count(v, 'B') << endl;
}