// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>

using namespace std;

void f1(const string& str) {
  cout << str.substr(str.find("D"), 3) << endl;
}

void f2(const string_view str) {
  cout << str.substr(str.find("D"), 3) << endl;
}

int main() {
  f1("ABCDEFGHI"); // 動的なメモリ確保が発生する
  f2("ABCDEFGHI"); // 動的なメモリ確保は発生しない
}
