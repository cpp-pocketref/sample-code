// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>

using namespace std;

int count_ = 0;
bool isComputationFinished() { return ++count_ > 3; }

void preprocessSomething() {}
void computeSomething() {}
void postprocessSomething() {}

void foo() {
  while (!isComputationFinished()) {
    preprocessSomething();
    this_thread::yield();  // プロセッサを占有し続けることなく、
                           // 適宜他のスレッドに処理を譲る
    computeSomething();
    this_thread::yield();  // プロセッサを占有し続けることなく、
                           // 適宜他のスレッドに処理を譲る
    postprocessSomething();
  }
}

int main() {
  thread th1(foo);
  th1.join();
}

