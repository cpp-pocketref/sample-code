// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <unordered_set>

using namespace std;

void output(const unordered_set<char>& container) {
  cout << '{';
  for (char x : container) {
    cout << x << ' ';
  }
  cout << '}' << endl;
}

int main() {
  unordered_set<char> a;
  unordered_set<char> b = {'X', 'Y', 'Z'};
  unordered_set<char> c = b;
  unordered_set<char> d0 = b;
  unordered_set<char> d = move(d0);
  unordered_set<char> e(b.begin(), b.end());
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
}