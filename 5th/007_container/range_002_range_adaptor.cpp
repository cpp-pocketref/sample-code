// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

int main() {
  vector<int> v = {1, 7, 8, 9, 4, 2};

  // vの要素は変更されず、次のfor文の各ループの実行毎に
  // 奇数要素のみ抽出し、値を10倍に変換する。
  for (int i : v | views::filter([](int x) { return x % 2 == 1; })
                 | views::transform([](int x) { return x * 10; })) {
    cout << i << ' '; // 「10 70 90 」が出力される
  }
}