// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <unordered_set>

using namespace std;

void output(const unordered_multiset<char>& container) {
  cout << '{';
  for (char x : container) {
    cout << x << ' ';
  }
  cout << '}' << endl;
}

int main() {
  unordered_multiset<char> a;
  unordered_multiset<char> b = {'X', 'Y', 'Z'};
  unordered_multiset<char> c = b;
  unordered_multiset<char> d0 = b;
  unordered_multiset<char> d = move(d0);
  unordered_multiset<char> e(b.begin(), b.end());
  output(a);
  output(b);
  output(c);
  output(d);
  output(e);
}