// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <thread>
#include <future>
#include <chrono>
#include <functional> // ref

using namespace std;

int worker(const vector<int>& data) {
  int sum = 0;
  for (int i : data) {
    // 時間がかかる処理
    this_thread::sleep_for(chrono::milliseconds{100});
    sum += i;
  }
  return sum;
}

int main() {
  vector<int> data = { 1, 2, 3, 4, 5 };

  // worker()関数を非同期に実行する
  future<int> f =
      async(launch::async, worker, ref(data));

  try {
    // 非同期処理の結果を取得する
    cout << f.get() << endl;
  }
  catch (...) {
    // worker()関数内で送出された例外を捕捉
  }
}