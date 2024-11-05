// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  int i;
  cout << "何か好きな数値を入力してください:";
  if (cin >> i) {
    cout << i << "が入力されました" << endl;
  }
}