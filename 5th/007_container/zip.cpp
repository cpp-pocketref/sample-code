// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <string>
#include <ranges>

using namespace std;

int main()
{
  vector<int> xs = {1, 4, 7, 6, 9, 2};
  array<float, 3> ys = {0.5, 7.2, 100.5};
  list<string> zs = {"Lorem", "ipsum", "dolor", "sit", "amet"};

  for (const auto& [x, y, z] : views::zip(xs, ys, zs)) {
    cout << x << ' ' << y << ' ' << z << endl;
  }
}