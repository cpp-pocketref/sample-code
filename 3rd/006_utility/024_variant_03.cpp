// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <variant>
#include <string>

using namespace std;

int main()
{
  // 代入されうる全ての型に共通インタフェースを使用する
  auto printer = [](const auto& x) {
    cout << x << endl;
  };

  variant<int, char, string> v = 3;

  // 代入されている値を出力する
  visit(printer, v);

  // 文字列を代入し、代入されている値を出力する
  v = "Hello";
  visit(printer, v);
}
