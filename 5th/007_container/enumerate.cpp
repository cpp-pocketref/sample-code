// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <string>
#include <ranges>

using namespace std;

int main()
{
  vector<string> items = {"Lorem", "ipsum", "dolor", "sit"};

  for (const auto& [index, item]: views::enumerate(items)) {
    cout << "[" << index << "]: " << item << endl;
  }
}