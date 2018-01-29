// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
  string s = "2018/04/01";

  // 日付にマッチする正規表現
  regex rex("(\\d{4})/(\\d{2})/(\\d{2})");
  smatch result;

  // 入力された文字列が正規表現にマッチするか調べる
  if (regex_match(s, result, rex)) {
    // マッチ結果を取り出す
    cout << result[0] << endl; // マッチ全体
    cout << result[1] << endl; // 年
    cout << result[2] << endl; // 月
    cout << result[3] << endl; // 日
  }
}

