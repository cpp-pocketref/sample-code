// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6};

  // 1‚ğ11‚É’u‚«Š·‚¦‚é
  replace(v.begin(), v.end(), 1, 11);

  // ‹ô”’l‚ğ99‚É’u‚«Š·‚¦‚é
  replace_if(v.begin(), v.end(), [](int n) { return n % 2 == 0; }, 99);

  for (int x : v) {
    cout << x << endl;
  }
}
