// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <random>

using namespace std;

int main() {
  mt19937 engine; // 乱数生成器
  uniform_int_distribution<> dist(0, 10); // 分布方法

  for (int i = 0; i < 5; ++i) {
    int result = dist(engine); // 乱数生成
    cout << result << endl;
  }
}

