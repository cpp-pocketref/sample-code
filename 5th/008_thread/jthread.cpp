// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <chrono>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>

using namespace std;

// 排他的な出力処理
mutex printMutex_;
void print(const string& s) {
  lock_guard<mutex> lk{printMutex_};
  cout << s << endl;
}

void f(stop_token s, string title) {
  while (!s.stop_requested()) {
    print(title + " ...");
    this_thread::sleep_for(chrono::seconds{1});
  }
  print(title + " 停止要求を検知しました。スレッドを停止します");
}

int main() {
  // 停止可能なスレッドを作成する
  jthread th{f, "[Thread A]"};

  this_thread::sleep_for(chrono::seconds{3});

  // スレッドに対して停止要求を送る
  th.request_stop();
}