// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = {2, 4, 5, 2, 3, 1, 4};

  cout << count(v.cbegin(), v.cend(), 4) << endl;
  cout << count(v.cbegin(), v.cend(), 9) << endl;
  cout << count_if(v.cbegin(), v.cend(), [](int n) { return n > 3; }) <<endl;
}
