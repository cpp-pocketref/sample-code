// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <utility>

using namespace std;

int main() {
  int a = 1;
  int b = 2;

  swap(a, b);

  cout << a << ", " << b << endl;
}

