// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5};

  reverse(v.begin(), v.end());

  for (int x : v) {
    cout << x << endl;
  }

  cout << "\n";

  reverse_copy(v.cbegin(), v.cend(),
               ostream_iterator<int>(cout, "\n"));
}
