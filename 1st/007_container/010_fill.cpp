// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5};

  // ‘S‚Ä‚Ì—v‘f‚ğ8‚Å–„‚ß‚é
  fill(v.begin(), v.end(), 8);

  // æ“ª3—v‘f‚ğ9‚Å–„‚ß‚é
  fill_n(v.begin(), 3, 9);

  for (int x : v) {
    cout << x << endl;
  }
}
