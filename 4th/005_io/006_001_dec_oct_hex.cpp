// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  int x = 16;

  cout << "---- 標準 (dec) ----" << endl;
  cout << x << endl;

  cout << "---- oct ----" << endl;
  cout << oct << x << endl;

  cout << "---- dec ----" << endl;
  cout << dec << x << endl;

  cout << "---- hex ----" << endl;
  cout << hex << x << endl;
}
