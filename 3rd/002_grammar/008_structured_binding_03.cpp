// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using std::cout, std::endl;

// 位置を表す型。X座標とY座標をもつ
struct Point {
  float x = 0;
  float y = 0;
};

// 関数get_point()はPoint型で位置を返す
Point get_point() {
  return {3.0f, 5.0f};
}

int main()
{
  // 関数get_point()を呼び出し、返されるPoint型の値を分解する。
  // X座標をx変数、Y座標をy変数に代入する
  auto [x, y] = get_point();

  cout << x << endl; // 「3」が出力される
  cout << y << endl; // 「5」が出力される
}
