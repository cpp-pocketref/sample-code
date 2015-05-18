// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
  list<int> ls = {0, 1, 2};

  ls.pop_front();

  for (int x : ls) {
    cout << x << endl;
  }
}
