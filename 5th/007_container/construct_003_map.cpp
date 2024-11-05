// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <map>
#include <string>

using namespace std;

void output(const map<string, int>& container) {
  cout << '{';
  for (const auto& x : container) {
    cout << '(' << x.first << ',' << x.second << ") ";
  }
  cout << '}' << endl;
}

int main() {
  map<string, int> a;
  map<string, int> b = {
    {"red", 1},
    {"blue", 2},
  };
  map<string, int> c = b;
  map<string, int> d0 = b;
  map<string, int> d = move(d0);
  map<string, int> e(b.begin(), b.end());
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
}