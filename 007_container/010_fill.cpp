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

  // �S�Ă̗v�f��8�Ŗ��߂�
  fill(v.begin(), v.end(), 8);

  // �擪3�v�f��9�Ŗ��߂�
  fill_n(v.begin(), 3, 9);

  for (int x : v) {
    cout << x << endl;
  }
}
