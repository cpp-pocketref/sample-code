// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  // 整数を文字列に変換
  string a = to_string(100);
  cout << "a:" << a << endl;

  // 浮動小数点数を文字列に変換
  string b = to_string(123.45);
  cout << "b:" << b << endl;
}