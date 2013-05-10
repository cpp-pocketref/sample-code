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
  vector<int> v = {1, 1, 2, 3, 3, 4, 5, 5};

  // d•¡—v‘f‚ğíœ‚·‚é
  v.erase(unique(v.begin(), v.end()),
          v.end());

  for (int x : v) {
    cout << x << endl;
  }
}
