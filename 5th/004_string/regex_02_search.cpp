// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
  string s = "今日の日付は2024/04/01です";

  regex rex{"(\\d{4})/(\\d{2})/(\\d{2})"};
  smatch result;
  if (regex_search(s, result, rex)) {
    cout << result[0] << endl; // マッチ全体
    cout << result[1] << endl; // 年
    cout << result[2] << endl; // 月
    cout << result[3] << endl; // 日
  }
}