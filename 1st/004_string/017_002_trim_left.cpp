// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <algorithm>

bool isSpace(char c) {
  return c == ' ';
}

template <class Predicate>
std::string trimLeft(std::string&& s, Predicate pred) {
  std::string::iterator it =
      std::find_if_not(s.begin(), s.end(), pred);
  s.erase(s.begin(), it);
  return s;
}

std::string trimLeft(std::string&& s) {
  return trimLeft(std::move(s), isSpace);
}

#include <iostream>
#include <utility>
using namespace std;

int main() {
  string s = "   abc";

  // 左の空白を削除する
  s = trimLeft(move(s));

  cout << '[' << s << ']' << endl;
}

