// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <exception>

using namespace std;

void on_terminate() {
  cout << "on terminate" << endl;
}

int main() {
  set_terminate(on_terminate); // 終了前に呼び出される処理を登録する
  terminate(); // システムを異常終了させる
}

