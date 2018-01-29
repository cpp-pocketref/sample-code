// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

// 排他的な出力処理
mutex printMutex_;
template <class T>
void print(T x) {
  lock_guard<mutex> lk(printMutex_);
  cout << x << endl;
}

void foo() {
  print("mainとは別スレッドで実行しています");
}

int main() {
  thread th(foo);
  th.join(); // スレッドが終了するまで待機する

  print("処理が終了しました");
}

