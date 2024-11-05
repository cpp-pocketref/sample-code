// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <execution>
#include <algorithm>
#include <vector>

using namespace std;

void print(const vector<int>& v) {
  for (int x : v) {
    cout << x << ' ';
  }
  cout << endl;
}

int main() {
  vector<int> xs = { 1, 6, 4, 2, 5, 3 };

  // 処理を並列化してソートを実行
  sort(execution::par, xs.begin(), xs.end());

  print(xs);

  // 処理を並列化かつベクトル化して、偶数の要素数を計測
  int num_even = count_if(execution::par_unseq,
                          xs.begin(), xs.end(),
                          [](auto x) { return x % 2 == 0; });

  cout << "Num of even values: " << num_even << endl;
}