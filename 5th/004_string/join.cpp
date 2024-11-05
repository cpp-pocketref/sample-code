// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <string>
#include <string_view>
#include <ranges>

using namespace std;

int main() {
  vector<string> input = {"abc", "123", "xyz"};

  auto joined = input | views::join_with(string_view{","});
  string str(joined.begin(), joined.end());

  cout << str << endl;
}