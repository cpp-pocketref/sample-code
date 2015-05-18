// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
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
