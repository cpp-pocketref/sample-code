// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = { 1, 2, 3 };

  for_each(v.begin(), v.end(), [](int& n) { n *= 3; });
  for_each_n(v.data(), v.size(), [](int n) { cout << n << endl; });
}
