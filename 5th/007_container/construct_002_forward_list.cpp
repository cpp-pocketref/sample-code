// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <forward_list>

using namespace std;

void output(const forward_list<double>& container) {
  cout << '{';
  for (double x : container) {
    cout << x << ' ';
  }
  cout << '}' << endl;
}

int main() {
  forward_list<double> a;
  forward_list<double> b(4);
  forward_list<double> c(5, 129.3);
  forward_list<double> d = {3., 3.1, 3.14};
  forward_list<double> e = b;
  forward_list<double> f0 = b;
  forward_list<double> f = move(f0);
  forward_list<double> g(c.begin(), c.end());
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
  output(f);
  output(g);
}