// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <functional>

using namespace std;

struct foo {
  int operator()(int x, int y) const { return x + y; }
};

int bar(int x, int y) { return x * y; }

int main() {
  function<int(int, int)> f = foo();
  function<int(int, int)> g = bar;
  function<int(int, int)> h = [](int x, int y) { return x - y; };

  int fResult = f(1, 2);
  cout << "f : " << fResult << endl;

  int gResult = g(3, 4);
  cout << "g : " << gResult << endl;

  int hResult = h(6, 5);
  cout << "h : " << hResult << endl;
}

