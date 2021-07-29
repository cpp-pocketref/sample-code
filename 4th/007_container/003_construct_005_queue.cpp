// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
  queue<string> q;

  // pushメンバ関数で要素を追加する。
  q.push("ramen");
  q.push("udon");
  q.push("soba");

  while (!q.empty()) {
    // top()メンバ関数で先頭要素を得る。
    cout << q.front() << endl;
    // pop()メンバ関数で要素を1つ削除する。
    q.pop();
  }
}
