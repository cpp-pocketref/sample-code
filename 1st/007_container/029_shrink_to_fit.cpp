// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;

  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }

  cout << v.capacity() << endl;
  v.shrink_to_fit();
  cout << v.capacity() << endl;
}
