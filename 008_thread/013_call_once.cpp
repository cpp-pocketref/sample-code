// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <mutex>
#include <functional>

using namespace std;

struct Object {
  Object() : data("未初期化状態") {}

  void initialize() {
    cout << "Objectを初期化" << endl;
    data = "初期化済み";
    cout << "初期化完了" << endl;
  }

  void print() {
    lock_guard<mutex> lock(m);
    cout << data << endl;
  }

private:
  string data;
  mutex m;
};

void initObj(Object& obj) {
  obj.initialize();
}

void worker() {
  static once_flag f;
  static Object obj;

  // initObj()関数は一度だけ呼びだされる
  call_once(f, initObj, ref(obj));

  obj.print();
}

int main() {
  thread th1(worker);
  thread th2(worker);
  th1.join();
  th2.join();
}
