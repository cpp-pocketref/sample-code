// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <forward_list>

using namespace std;

int main() {
  forward_list<int> ls = {0, 1, 2, 3, 4, 5, 6, 7};
  ls.clear();

  if (ls.empty()) {
    cout << "コンテナは空" << endl;
  }
  else {
    cout << "コンテナは空ではない" << endl;
  }
}