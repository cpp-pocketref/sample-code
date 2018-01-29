// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  string s = "hello";
  cout << "s:" << s << endl;

  s.clear();
  cout << "s:" << s << endl;
}
