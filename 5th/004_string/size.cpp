// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  string x;
  cout << "x.size():" << x.size() << endl;
  cout << "x.length():" << x.length() << endl;

  string y = "hello";
  cout << "y.size():" << y.size() << endl;
  cout << "y.length():" << y.length() << endl;
}