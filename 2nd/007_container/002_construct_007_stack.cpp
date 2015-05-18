// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  stack<string> s;

  // pushメンバ関数で要素を追加する。
  s.push("ramen");
  s.push("udon");
  s.push("soba");

  while (!s.empty()) {
    // top()メンバ関数で先頭要素を得る。
    cout << s.top() << endl;
    // pop()メンバ関数で要素を1つ削除する。
    s.pop();
  }
}
