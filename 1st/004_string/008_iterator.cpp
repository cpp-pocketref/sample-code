// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

void foo(string::const_iterator a) {
  // 何もしない
}
void foo(string::iterator a) {
  *a = 'x';
}

int main() {
  // 範囲for文で文字列を走査する
  string x = "hello";
  cout << "x:";
  for (const char& c : x) {
    cout << c;
  }
  cout << endl;

  // 逆順イテレータの範囲で初期化
  string y(x.rbegin(), x.rend());
  cout << "y:" << y << endl;

  // cbegin()／cend()はconst_iteratorを返す
  foo(y.cbegin());
  cout << "y:" << y << endl;

  // begin()／end()はオブジェクトの状態によって
  // iteratorかconst_iteratorかが切り替わる
  foo(y.begin());
  cout << "y:" << y << endl;
}
