// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <deque>

using namespace std;

void output(const deque<double>& container) {
  cout << '{';
  for (double x : container) {
    cout << x << ' ';
  }
  cout << '}' << endl;
}

int main() {
  deque<double> a;
  deque<double> b(4);
  deque<double> c(5, 129.3);
  deque<double> d = {3., 3.1, 3.14};
  deque<double> e = b;
  deque<double> f0 = b;
  deque<double> f = move(f0);
  deque<double> g(c.begin(), c.end());
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
  output(f);
  output(g);
}