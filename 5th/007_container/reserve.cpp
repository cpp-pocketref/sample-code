// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  v.reserve(10);

  cout << v.capacity() << endl;

  for (int i = 0; i < 11; ++i) {
    v.push_back(i);
  }

  cout << v.capacity() << endl;
}