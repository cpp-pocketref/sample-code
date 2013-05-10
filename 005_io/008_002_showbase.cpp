// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  int x = 24;

  cout << "---- showbase ----" << endl;
  cout << showbase;
  cout << oct << x << endl;
  cout << hex << x << endl;

  cout << "---- noshowbase ----" << endl;
  cout << noshowbase;
  cout << oct << x << endl;
  cout << hex << x << endl;

  cout << "---- showbase (0) ----" << endl;
  cout << showbase;
  cout << oct << 0 << endl;
  cout << hex << 0 << endl;
}
