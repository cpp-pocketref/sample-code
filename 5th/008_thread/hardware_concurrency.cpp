// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <thread>
#include <vector>

using namespace std;
void computeSomething() {}

void worker() {
  computeSomething();
}

int main() {
  size_t mp = thread::hardware_concurrency();
  if (mp == 0) {
    mp = 1; // 並行実行可能なスレッド数を取得できなかったため、
            // 1スレッドだけ起動する
  }

  vector<thread> ths(mp);
  for (thread& th : ths) {
    th = thread{worker};
  }

  for (thread& th : ths) {
    th.join();
  }
}