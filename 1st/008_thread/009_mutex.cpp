// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <functional>

using namespace std;

struct Data {
  mutex mtx;
  int data;
};

void worker(Data& d) {
  d.mtx.lock();
  int n = d.data;
  {
    //時間のかかる計算
    this_thread::sleep_for(chrono::seconds(1));
    n += 1;
  }
  d.data = n;
  cout << "d.data : " << d.data << endl;
  d.mtx.unlock();
}

int main() {
  vector<thread> ths(4);
  Data d;
  d.data = 0;

  for (thread& th : ths) {
    th = thread(worker, ref(d));
  }

  for (thread& th : ths) {
    th.join();
  }
}
