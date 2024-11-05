// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

int main() {
  vector<int> v = {1, 4, 7, 6, 9, 2};

  for (int i : v | views::take(3)) {
    cout << i << ' ';
  }

  cout << '\n';

  for (int i : v | views::drop(3)) {
    cout << i << ' ';
  }

  cout << '\n';

  for (int i : v | views::filter([](int n) { return n % 2 == 0; })) {
    cout << i << ' ';
  }
}