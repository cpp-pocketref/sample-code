// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <map>

using namespace std;

void output(const multimap<string, int>& container) {
  cout << '{';
  for (const auto& x : container) {
    cout << '(' << x.first << ',' << x.second << ") ";
  }
  cout << '}' << endl;
}

int main() {
  multimap<string, int> a;
  multimap<string, int> b = {
    {"red", 1},
    {"blue", 2},
  };
  multimap<string, int> c = b;
  multimap<string, int> d0 = b;
  multimap<string, int> d = move(d0);
  multimap<string, int> e(b.begin(), b.end());
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
}
