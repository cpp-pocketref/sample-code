// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <chrono>
#include <iostream>
#include <thread>
#include <mutex>
#include <string>

using namespace std;

mutex printMutex_;
void print(const string& func, int value) {
  lock_guard<mutex> lk{printMutex_};
  cout << func << " : " << value << endl;
}

void foo() {
  chrono::seconds d{1};
  for (int i = 0; i < 3; ++i) {
    print("foo()", i);

    // 1秒間スリープする
    this_thread::sleep_for(d);
  }
}

void bar() {
  chrono::system_clock::time_point t =
    chrono::system_clock::now();
  for (int i = 0; i < 3; ++i) {
    print("bar()", i);

    // 1秒後までスリープする
    this_thread::sleep_until(t + chrono::seconds{i+1});
  }
}

int main() {
  thread t1{foo};
  thread t2{bar};

  t1.join();
  t2.join();
}