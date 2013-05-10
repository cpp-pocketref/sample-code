// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <regex>
#include <vector>

std::vector<std::string> split(std::string&& s, std::regex&& pattern) {
  std::sregex_token_iterator first(s.begin(), s.end(), pattern, -1);
  std::sregex_token_iterator last;
  return std::vector<std::string>(first, last);
}

#include <iostream>
#include <utility>
using namespace std;

int main() {
  string s = "123,456,789";

  // 文字列をカンマで分割する
  vector<string> result = split(move(s), regex(","));

  for (const string& x : result) {
    cout << x << endl;
  }
}

