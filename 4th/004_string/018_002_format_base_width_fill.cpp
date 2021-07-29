// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <format>

using namespace std;

int main() {
  // 2進数 (8桁0埋め)
  cout << format("{:08b}", 3) << endl;

  // 16進数 (小文字)
  cout << format("{:x}", 10) << endl;

  // 浮動小数点数を小数点以下7桁に丸めて文字列化
  cout << format("{0:.7}", 3.141592653589793238463L) << endl;

  // +符号を表示 (負数の-符号は常に表示される)
  cout << format("{0:+} {1:+04d}", 123, -456) << endl;

  // 正数は+符号の代わりにスペースを表示
  cout << format("[{0: }] [{1: 04d}]", 123, -456) << endl;
}