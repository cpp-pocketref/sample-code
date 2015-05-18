// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8};
  vector<int> v2 = {7, 6, 5, 4, 3, 2, 1, 0};

  cout << boolalpha;

  cout << is_sorted(v1.cbegin(), v1.cend()) << endl;
  cout << is_sorted(v2.cbegin(), v2.cend()) << endl;
  cout << is_sorted(v1.cbegin(), v1.cend(), greater<int>()) << endl;
  cout << is_sorted(v2.cbegin(), v2.cend(), greater<int>()) << endl;
}
