// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <span>
#include <algorithm>

using namespace std;

void output(span<int> s) {
  cout << '{';
  for (int x : s) {
    cout << x << ' ';
  }
  cout << '}' << endl;
}

int main() {
  vector<int> v = { 1, 2, 3, 4, 5 };

  output(v);
  output(span(v.data() + 2, 3));
  output(span{v}.subspan(3, 2));
}