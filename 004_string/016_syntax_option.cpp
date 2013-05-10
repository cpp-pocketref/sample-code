// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <array>
#include <string>
#include <regex>

using namespace std;

int main() {
  array<string, 2> ar = { "abc", "def" };

  // grep構文を使用する
  // 以下の正規表現は、abcもしくはdefにマッチする
  regex rex("abc\ndef", regex_constants::grep);
  for (const string& s : ar) {
    bool result = regex_match(s, rex);
    cout << s << " is " << (result ? "match" : "not match") << endl;
  }
}

