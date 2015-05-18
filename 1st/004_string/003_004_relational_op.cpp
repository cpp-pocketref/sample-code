// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  string a = "123";
  string b = "123";

  cout << boolalpha;

  cout << "== : " << (a == b) << endl;
  cout << "!= : " << (a != b) << endl;
  cout << "<  : " << (a <  b) << endl;
  cout << "<= : " << (a <= b) << endl;
  cout << ">  : " << (a >  b) << endl;
  cout << ">= : " << (a >= b) << endl;
}
