// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  string a = "123";
  string b = "123";

  cout << "== : " << (a == b) << endl;
  cout << "!= : " << (a != b) << endl;
  cout << "<  : " << (a <  b) << endl;
  cout << "<= : " << (a <= b) << endl;
  cout << ">  : " << (a >  b) << endl;
  cout << ">= : " << (a >= b) << endl;
}