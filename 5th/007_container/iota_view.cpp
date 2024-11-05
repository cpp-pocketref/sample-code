// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <ranges>

using namespace std;

int main() {
  for (int i : views::iota(1, 10)) {
    cout << i << ' ';
  }

  cout << '\n';

  for (int i : views::iota(10) | views::take(5)) {
    cout << i << ' ';
  }
}