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
std::string trimRight(std::string&& s, Predicate pred) {
  std::string::iterator it =
      std::find_if_not(s.rbegin(), s.rend(), pred).base();
  s.erase(it, s.end());
  return s;
}

std::string trimRight(std::string&& s) {
  return trimRight(std::move(s), isSpace);
}

#include <iostream>
#include <utility>
using namespace std;

int main() {
  string s = "abc   ";

  // 右の空白を削除する
  s = trimRight(move(s));

  cout << '[' << s << ']' << endl;
}

