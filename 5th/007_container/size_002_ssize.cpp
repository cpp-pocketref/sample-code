// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void output_without_last(const vector<int>& v) {
  cout << '{';
  for (int i = 0; i < ssize(v) - 1; ++i) {
    cout << v[i] << ' ';
  }
  cout << '}' << endl;
}

int main() {
  vector<int> v1 = { 3, 1, 8 };
  vector<int> v2 = {};

  output_without_last(v1);
  output_without_last(v2);
}