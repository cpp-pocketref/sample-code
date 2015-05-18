// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = { 1, 2, 3 };

  for_each(v.begin(), v.end(), [](int& n) { n *= 3; });
  for_each(v.begin(), v.end(), [](int n) { cout << n << endl; });
}
