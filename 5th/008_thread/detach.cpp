// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <future>

using namespace std;

promise<void> setter_;
future<void> waiter_;
void computeSomething() {
  setter_.set_value();
}

void foo() {
  // 時間のかかる処理
  computeSomething();
}

void bar() {
  thread th{foo};
  th.detach(); // スレッドを手放す
} // bar()を抜けてもfooは別スレッドで実行中

int main() {
  waiter_ = setter_.get_future();

  bar();

  waiter_.wait();
}