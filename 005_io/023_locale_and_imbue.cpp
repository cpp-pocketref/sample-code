// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <locale>

using namespace std;

int main() {
  cout << 1000 << endl;

  locale l("");
  cout.imbue(l);

  cout << 1000 << endl;
}
