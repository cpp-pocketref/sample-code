// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <set>

using namespace std;

void output(const set<char>& container) {
  cout << '{';
  for (char x : container) {
    cout << x << ' ';
  }
  cout << '}' << endl;
}

int main() {
  set<char> a;
  set<char> b = {'X', 'Y', 'Z'};
  set<char> c = b;
  set<char> d0 = b;
  set<char> d = move(d0);
  set<char> e(b.begin(), b.end());
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
}
