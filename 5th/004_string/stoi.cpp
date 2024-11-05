// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  // 文字列から整数への変換
  int a = stoi("100");
  cout << "a:" << a << endl;

  // 文字列から整数への変換
  // 解析終了した位置を受け取る
  size_t idx;
  int b = stoi("100", &idx);
  cout << "b:" << b << endl;

  // 文字列から整数への変換
  // エラーが発生する場合
  int c = stoi("100abc", &idx);
  cout << "c:" << c << " idx:" << idx << endl;

  // 16進数文字列から整数への変換
  // 解析終了した位置を受け取る
  int d = stoi("100abc", &idx, 16);
  cout << "d:" << d << " idx:" << idx << endl;

  // 16進数文字列から整数への変換
  // 解析終了した位置を受け取らない
  int e = stoi("100abc", nullptr, 16);
  cout << "e:" << e << endl;

  // 文字列から単精度浮動小数点数への変換
  float f = stof("12.34");
  cout << "f:" << f << endl;
}