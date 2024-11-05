// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <ranges>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5};
  auto is_even = [](int x) { return x % 2 == 0; };
  auto is_odd = [](int x) { return x % 2 == 1; };

  list<int> evens = ranges::to<list<int>>(v | views::filter(is_even));
  deque<int> odds = v | views::filter(is_odd) | ranges::to<deque<int>>();

  for (auto x : evens) {
    cout << x << ' '; // 「2 4 」が出力される
  }
  cout << endl;
  for (auto x : odds) {
    cout << x << ' '; // 「1 3 5 」が出力される
  }
}