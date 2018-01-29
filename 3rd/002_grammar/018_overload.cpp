// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include  <iostream>
/*
int power(int x, int n)
{
  int ret = 1;
  for(int i = 0; i < n; ++i) ret *= x;
  return ret;
}
*/

double power(double x, int n)
{
  double ret = 1.0;
  for(int i = 0; i < n; ++i) ret *= x;
  return ret;
}

int func(int x, int y = 10)
{
  return x * y;
}

int func(int x)
{
  return x;
}

struct X {};
int operator+(const X& x, int y) { return 0; }


int main()
{
  using namespace std;
  cout << power(2, 2) << endl;
  cout << power(2.5, 2) << endl;
  cout << X() + 1 << endl;
}
