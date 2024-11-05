// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <thread>
#include <mutex>
#include <functional> // ref

using namespace std;

struct Data {
  mutex m;
  int data = 0;
  void doSomething() { data = data + 1; }
};

void foo(Data& d1, Data& d2) {
  // C++17のstd::scoped_lockを使用してロックをかける
  // locks変数のデストラクタが呼び出されるときに、d1.m／d2.mのunlock()が呼び出される
  scoped_lock locks{d1.m, d2.m};

  // C++11／C++14では次のように、std::unique_lockクラスとstd::lock()関数を利用する
  /*
  unique_lock<mutex> u1{d1.m, defer_lock};
  unique_lock<mutex> u2{d2.m, defer_lock};
  lock(u1, u2);
  */

  // d1／d2が両方ともロックされている
  d1.doSomething();
  d2.doSomething();
}

int main() {
  Data d1, d2;
  thread th1{foo, ref(d1), ref(d2)};
  thread th2{foo, ref(d1), ref(d2)};

  th1.join();
  th2.join();
}