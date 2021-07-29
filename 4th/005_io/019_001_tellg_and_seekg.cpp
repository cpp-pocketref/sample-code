// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  istringstream is("WINDY WOOD");

  string x, y, z;
  is >> x;
  auto pos = is.tellg();
  is >> y;

  is.seekg(pos);
  is >> z;

  cout << x << ' ' << y << ' ' << z << endl;
}
