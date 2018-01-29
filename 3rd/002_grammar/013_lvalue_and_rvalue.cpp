// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <utility>
using namespace std;

struct S { int i = 0; };

S& getS()
{
  static S s;
  return s;
}

S&& getSXvalue() { return std::move(S()); }
int&& getXValue() { return std::move(0); }

int main(int argc, const char* argv[])
{
  S s;
  s = S();
  s.i = 1;
  getS() = S();
  int&& i = getXValue();
  i = 2;
  cout << i << endl;
}
