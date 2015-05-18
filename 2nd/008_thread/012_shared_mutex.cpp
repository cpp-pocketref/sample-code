// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <chrono>
#include <iostream>
#include <functional> // cref, ref
#include <vector>
#include <thread>
#include <shared_mutex>

using namespace std;

struct Data {
  Data() : data(0) {}
  shared_timed_mutex mutable mtx;
  int data;
};

void writer(Data& d) {
  //排他的なロックを取得
  d.mtx.lock();

  //時間のかかる計算
  int n = d.data;
  d.data = n + 1;
  this_thread::sleep_for(chrono::seconds(1));
  cout << "updated." << endl;

  d.mtx.unlock();
}

void reader(const Data& d) {
  for( ; ; ) {
    //共有可能なロックを取得
    d.mtx.lock_shared();
    int n = d.data;
    d.mtx.unlock_shared();

    if(n == 1) {
      break;
    }
    this_thread::sleep_for(chrono::milliseconds(100));
  }
}

int main() {
  Data d;
  cout << "start." << endl;

  vector<thread> rs;
  for (int i = 0; i < 3; ++i) {
    rs.emplace_back(reader, cref(d));
  }
  thread w(writer, ref(d));

  w.join();
  for (thread& th : rs) {
    th.join();
    cout << "finished." << endl;
  }
}

