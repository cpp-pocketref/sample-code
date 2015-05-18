// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <mutex>
#include <string>

using namespace std;

mutex printMutex_;
void print(const string& s) {
  lock_guard<mutex> lk(printMutex_);
  std::cout << s << std::endl;
}

void foo() {
  print("mainとは別スレッドで実行されています");
}

struct bar {
  void operator() (const string& msg) const {
    print(msg + "が渡されました");
  }
};

int main() {
  thread th1(foo);
  thread th2(bar(), "An argument");
  th1.join();
  th2.join();
}
