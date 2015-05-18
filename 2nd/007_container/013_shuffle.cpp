// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

  shuffle(v.begin(), v.end(), mt19937());

  for (int x : v) {
    cout << x << endl;
  }
}
