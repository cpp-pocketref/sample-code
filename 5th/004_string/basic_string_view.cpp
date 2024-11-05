// Copyright (c) 2012-2024
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

  // string_viewを仮引数にとる関数は、
  // 文字列リテラル、string、string_viewを受け取れる
  f2(string{"ABCDEFGHI"});
  f2(string_view{"ABCDEFGHI"});
}
