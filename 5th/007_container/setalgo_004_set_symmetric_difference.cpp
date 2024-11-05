// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v1 = {3, 4, 7, 8};
  vector<int> v2 = {1, 4, 8};

  set_symmetric_difference(v1.cbegin(), v1.cend(),
                           v2.cbegin(), v2.cend(),
                           ostream_iterator<int>{cout, "\n"});
}