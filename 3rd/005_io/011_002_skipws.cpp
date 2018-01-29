// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  string s = " A  Z";

  cout << "skipws:" << endl;
  istringstream s1(s);
  char cs[2];
  s1 >> cs[0] >> cs[1];
  for (char c : cs) {
    cout << '"' << c << '"' << endl;
  }

  cout << "noskipws:" << endl;
  istringstream s2(s);
  char cns[5];
  s2 >> noskipws >> cns[0] >> cns[1] >> cns[2] >> cns[3] >> cns[4];
  for (char c : cns) {
    cout << '"' << c << '"' << endl;
  }
}
