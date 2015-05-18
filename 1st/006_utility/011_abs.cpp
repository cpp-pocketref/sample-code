// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
  cout << "int : "    << abs(-3) << endl;
  cout << "long : "   << abs(-4L) << endl;
  cout << "float : "  << abs(-3.13f) << endl;
  cout << "double : " << abs(-3.14) << endl;
}

