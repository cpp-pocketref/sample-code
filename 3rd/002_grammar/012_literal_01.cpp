// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
using namespace std;

int main()
{
  int a = 1'000;
  int b = 0b1000'1000;
  double c = 1'000.123'45;

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
}

/*
1000
136
1000.12
*/

