// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  cout << "数値を入力してください" << endl;
  int i;
  cin >> i;
  if (cin) {
    cout << i << "が入力されました。" << endl;
  } else {
    cout << "数値が入力されませんでした" << endl;
  }
}
