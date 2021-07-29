// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <set>

using namespace std;

void output(const multiset<char>& container) {
  cout << '{';
  for (char x : container) {
    cout << x << ' ';
  }
  cout << '}' << endl;
}

int main() {
  multiset<char> a;
  multiset<char> b = {'X', 'Y', 'Z'};
  multiset<char> c = b;
  multiset<char> d0 = b;
  multiset<char> d = move(d0);
  multiset<char> e(b.begin(), b.end());
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
}
