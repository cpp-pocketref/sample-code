// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <ranges>
#include <string_view>

using namespace std;

int main() {
  string_view input = "abc,123,xyz";

  for (auto sub : input | views::split(string_view{","})) {
    cout << string_view{sub} << endl;
  }
}