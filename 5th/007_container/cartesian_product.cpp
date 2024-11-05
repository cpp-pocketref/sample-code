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
  vector<int> xs = {1, 2, 3};
  array<string, 2> ys = {"a", "A"};
  list<string> zs = {"b", "B"};

  // cartesian_productを使用すると以下のようにfor文をネストするよりも簡潔に多重ループ処理を実装できる
  // for (const auto& x: xs) {
  //   for (const auto& y: ys) {
  //     for (const auto& z: zs) {
  //       // ...
  //     }
  //   }
  // }
  //
  // ループのたびにcartesian_productはtuple<int&, string&, string&>型の値を返す。
  // 構造化束縛を使用してそれらを個別の変数に分解して取り出す
  for (const auto& [x, y, z]: views::cartesian_product(xs, ys, zs)) {
    cout << x << y << z << ' ';
  }
  cout << endl;
}