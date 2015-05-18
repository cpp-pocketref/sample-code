// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <list>

using namespace std;

void output(const list<double>& container) {
  cout << '{';
  for (double x : container) {
    cout << x << ' ';
  }
  cout << '}' << endl;
}

int main() {
  list<double> a;
  list<double> b(4);
  list<double> c(5, 129.3);
  list<double> d = {3., 3.1, 3.14};
  list<double> e = b;
  list<double> f0 = b;
  list<double> f = move(f0);
  list<double> g(c.begin(), c.end());
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
  output(f);
  output(g);
}
