// Copyright (c) 2012-2017
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

  // 代入されている値を出力する
  visit(PrintVisitor(), v);

  // 文字列を代入し、代入されている値を出力する
  v = "Hello";
  visit(PrintVisitor(), v);
}
