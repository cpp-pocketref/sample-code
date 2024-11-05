// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <array>

using namespace std;

void output(const array<int, 4>& container) {
  cout << '{';
  for (int x : container) {
    cout << x << ' ';
  }
  cout << '}' << endl;
}

int main() {
  array<int, 4> a;
  array<int, 4> b = {};
  array<int, 4> c = {2, 3, 5, 7};
  array<int, 4> d = c;
  array<int, 4> e0 = c;
  array<int, 4> e = move(e0);
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
}