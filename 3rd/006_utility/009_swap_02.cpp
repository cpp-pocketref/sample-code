// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <utility>

using namespace std;

int main()
{
  int a = 1;
  int b = 2;

  int before = exchange(a, b);

  cout << a << endl;
  cout << b << endl;
  cout << before << endl;
}
