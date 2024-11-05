// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <expected>
#include <string>
#include <sstream>

using namespace std;

// 文字列を数値に変換する。
// 正常値としてint型、
// エラー値としてstring型を返す
expected<int, string> convertToInt(const string& text) {
  stringstream ss{text};
  int result = 0;
  ss >> result;
  if (ss.fail()) {
    return unexpected("変換失敗"); // 変換に失敗した場合は、失敗した理由や状況を返す
  } else {
    return result; // 成功した場合は、成功値をそのまま返す
  }
}

int main() {
  expected<int, string> n1 = convertToInt("-100");
  if (n1) { // operator bool()によって成功したかどうかを確認できる
    cout << n1.value() << endl; // 正常値を取り出す
  }
  else {
    cout << n1.error() << endl; // エラー値を取り出す
  }
}