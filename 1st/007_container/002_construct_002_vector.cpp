// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>

using namespace std;

void output(const vector<double>& container) {
  cout << '{';
  for (double x : container) {
    cout << x << ' ';
  }
  cout << '}' << endl;
}

int main() {
  vector<double> a;
  vector<double> b(4);
  vector<double> c(5, 129.3);
  vector<double> d = {3., 3.1, 3.14};
  vector<double> e = b;
  vector<double> f0 = b;
  vector<double> f = move(f0);
  vector<double> g(c.begin(), c.end());
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
  output(f);
  output(g);
}
