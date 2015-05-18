// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <mutex>
#include <functional>

using namespace std;

struct Data {
  mutex m;
  int data;
  Data() : data(0) {}
};

void foo(Data& d1, Data& d2) {
  // lock()を呼び出してロックをかけるため、
  // defer_lockを渡して、ロックをかけるタイミングを遅らせる。
  unique_lock<mutex> u1(d1.m, defer_lock);
  unique_lock<mutex> u2(d2.m, defer_lock);

  lock(u1, u2);

  d1.data += 1;
  d2.data = d2.data + d1.data;
}

int main() {
  Data d1, d2;
  thread th1(foo, ref(d1), ref(d2));
  thread th2(foo, ref(d1), ref(d2));

  th1.join();
  th2.join();

  cout << d2.data << endl;
}
