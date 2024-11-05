// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <ranges>
#include <vector>

using namespace std;

int main() {
  vector<int> v{from_range, views::iota(1) | views::take(5)};

  for (auto x : v) {
    cout << x << ' ';
  }
}