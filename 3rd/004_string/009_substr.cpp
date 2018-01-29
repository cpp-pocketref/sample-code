// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  string x = "abcdef";
  cout << "x:" << x << endl;
  cout << "x.substr():" << x.substr() << endl;
  cout << "x.substr(2):" << x.substr(2) << endl;
  cout << "x.substr(2, 3):" << x.substr(2, 3) << endl;
}
