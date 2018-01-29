// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <utility>
#include <string>

using namespace std;

// 関数f()は、戻り値として整数値と文字列の2つ値からなるペアを返す
pair<int, string> f() {
  return {3, "Alice"};
}

int main()
{
  // 関数f()を呼び出して、戻り値のペアをidとnameに分解して受け取る
  auto [id, name] = f(); // idの型はint、nameの型はstring

  cout << id << endl;   // 「3」が出力される
  cout << name << endl; // 「Alice」が出力される
}
