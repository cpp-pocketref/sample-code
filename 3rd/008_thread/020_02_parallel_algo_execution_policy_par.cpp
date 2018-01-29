// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <algorithm>
#include <execution>
#include <mutex>
#include <vector>

using namespace std;

int main() {
  vector<int> xs = { 1, 2, 3, 4, 5, 6 };
  vector<int> ys;

  for_each(execution::par, xs.begin(), xs.end(), [&](int x) {
    // データ競合が発生する
    ys.push_back(x);
  });

  mutex mtx;
  for_each(execution::par, xs.begin(), xs.end(), [&](int x) {
    std::scoped_lock locked(mtx);
    // 排他制御によって、データ競合は発生しない
    ys.push_back(x);
  });
}
