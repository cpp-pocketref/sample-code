// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <optional>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

optional<int> convertToInt(const string& text) {
  stringstream ss{text};
  int result = 0;
  ss >> result;
  if (ss.fail()) {
    return nullopt; // 変換に失敗した場合は、失敗を表す無効な値を返す
  } else {
    return result; // 成功した場合は、値をそのまま返す
  }
}

int main() {
  optional<int> n1 = convertToInt("-100");
  if (n1) { // operator bool()によって成功したかどうかを確認できる
    cout << n1.value() << endl;
  }

  if (auto n1 = convertToInt("-100")) { // if文の中で戻り値を受け取って使用することもできる
    cout << *n1 << endl;
  }

  optional<int> n2 = convertToInt("abc");
  if (!n2) {
    cout << "変換失敗" << endl;
  }

  cout << n2.value_or(200) << endl;
}