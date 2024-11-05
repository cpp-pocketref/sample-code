// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <variant>
#include <string>

using namespace std;

int main()
{
  // vにはint値、char値、string値のいずれかを代入できる
  variant<int, char, string> v = 3;

  // 代入されているint値を取り出す
  int n = get<int>(v);
  cout << "int値 : " << n << endl;

  // 文字列を代入して取り出す
  v = "Hello";
  string s = get<string>(v);
  cout << "string値 : " << s << endl;

  // どの型の値が代入されているか判定する
  if (v.index() == 2) {
    cout << "vには文字列が代入されています" << endl;
  }

  // 代入されている値をポインタで取り出す。
  // 指定された型が代入されていなかったら、ヌルポインタが返る
  if (string* p = get_if<string>(&v)) {
    cout << "string値 : " << *p << endl;
  }
  else {
    cout << "string値は代入されていません" << endl;
  }
}
