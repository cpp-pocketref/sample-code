// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <chrono>
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <functional> // ref

using namespace std;

struct Data {
  mutex mtx;
  int data = 0;
};

void worker(Data& d) {
  d.mtx.lock(); //排他的なロックを取得

  //時間のかかる計算
  int n = d.data;
  this_thread::sleep_for(chrono::seconds{1});
  d.data = n + 1;

  d.mtx.unlock(); //排他的なロックを解除
}

int main() {
  vector<thread> ths(4);
  Data d; //スレッド間で共有されるリソース

  for (thread& th : ths) {
    th = thread{worker, ref(d)};
  }

  for (thread& th : ths) {
    th.join();
  }

  cout << "d.data : " << d.data << endl;
}