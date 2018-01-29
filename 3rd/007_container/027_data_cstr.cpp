// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <vector>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  vector<char> v = {'a', 'b', 'c'};
  char s[4] = {};
  memcpy(s, v.data(), v.size());

  cout << s << endl;
}
