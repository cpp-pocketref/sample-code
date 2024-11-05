// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void output(const unordered_multimap<string, int>& container) {
  cout << '{';
  for (const auto& x : container) {
    cout << '(' << x.first << ',' << x.second << ") ";
  }
  cout << '}' << endl;
}

int main() {
  unordered_multimap<string, int> a;
  unordered_multimap<string, int> b = {
    {"red", 1},
    {"blue", 2},
  };
  unordered_multimap<string, int> c = b;
  unordered_multimap<string, int> d0 = b;
  unordered_multimap<string, int> d = move(d0);
  unordered_multimap<string, int> e(b.begin(), b.end());
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
}