// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
  string s = "今日の日付は2018/04/01です";

  // 日付にマッチする正規表現
  regex rex{"(\\d{4})/(\\d{2})/(\\d{2})"};

  // 「YYYY/MM/DD」形式になっている日付を
  // 「YYYY年MM月DD日」形式に置き換える
  string format = "$1年$2月$3日";

  s = regex_replace(s, rex, format);
  cout << s << endl;
}