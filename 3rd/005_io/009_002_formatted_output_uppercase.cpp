// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  int x = 0x12ab;
  double y = 9.03e13;
  cout << hex << boolalpha;
  cout << "---- uppercase ----" << endl;
  cout << uppercase;
  cout << x << endl;
  cout << y << endl;
  cout << true << endl; // 効果がない
  cout << "---- nouppercase ----" << endl;
  cout << nouppercase;
  cout << x << endl;
  cout << y << endl;
  cout << true << endl;
}
