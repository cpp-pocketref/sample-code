// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = {1, 3, 8, 2, 0, 9};

  cout << *(min_element(v.cbegin(), v.cend()))
       << ", "
       << *(max_element(v.cbegin(), v.cend())) << endl;

  auto minmax_pair = minmax_element(v.cbegin(), v.cend());
  cout << *minmax_pair.first << ", " << *minmax_pair.second << endl;
}
