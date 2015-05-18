// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>

using namespace std;

void foo() {
  // mainとは別スレッドで実行される
}

int main() {
  thread th(foo);

  cout << "joinable? : " << boolalpha << th.joinable() << endl;
  th.join(); // スレッドが終了するまで待機する
  cout << "joinしました" << endl;
  cout << "joinable? : " << boolalpha << th.joinable() << endl;
}

