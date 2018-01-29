// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <any>
#include <string>

using namespace std;

int main()
{
  // any型には、コピー可能なあらゆる型の
  // オブジェクトを代入できる。
  // ここではint値を代入している
  any x = 3;

  // 代入されている値を取り出す
  int n = any_cast<int>(x);
  cout << "int値: " << n << endl;

  // 文字列を代入する
  x = string("Hello");
  string s = any_cast<string>(x);
  cout << "string値: " << s << endl;

  // どの型が代入されているかを判定する
  if (x.type() == typeid(string)) {
    cout << "xには文字列が代入されています" << endl;
  }

  // 代入されている値を参照で取り出す
  string& r = any_cast<string&>(x);
  r = "こんにちは";

  // 代入されている値をポインタで取り出す。
  // 指定された型が代入されていなかったら、
  // ヌルポインタが返る
  if (string* p = any_cast<string>(&x)) {
    cout << "string値: " << *p << endl;
  }
  else {
    cout << "string値は代入されていません" << endl;
  }
}
