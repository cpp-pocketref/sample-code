// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
  vector<int> v = { 3, 1, 8 };

  cout << size(v) << endl;
  cout << v.size() << endl;
}
