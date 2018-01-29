// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <utility>
#include <string>

using namespace std;

// 関数f()は、戻り値として整数値と文字列の2つを返す
pair<int, string> f() {
  return {3, "Alice"};
}

int main()
{
  pair<int, string> p = f();
  // idはp.firstへの参照、nameはp.secondへの参照になる
  auto& [id, name] = p;

  id = 1; // idを書き換えるとp.firstも書き換わる
  cout << p.first << endl;  // 「1」が出力される
  cout << p.second << endl; // 「Alice」が出力される
}
