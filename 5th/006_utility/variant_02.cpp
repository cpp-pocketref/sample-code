// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <variant>
#include <string>

using namespace std;

struct PrintVisitor {
  void operator()(int x) {
    cout << "int値 : " << x << endl;
  }

  void operator()(char x) {
    cout << "char値 : " << x << endl;
  }

  void operator()(const string& x) {
    cout << "string値 : " << x << endl;
  }
};

int main()
{
  variant<int, char, string> v = 3;

  visit(PrintVisitor{}, v); // 代入されている値を出力する

  v = "Hello"; // 文字列を代入し、
  visit(PrintVisitor{}, v); // 代入されている値を出力する
}