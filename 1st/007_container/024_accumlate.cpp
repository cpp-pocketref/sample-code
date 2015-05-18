// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4};

  cout << accumulate(v.cbegin(), v.cend(), 0) << endl;
  cout << accumulate(v.cbegin(), v.cend(), 1, multiplies<int>()) << endl;
}
