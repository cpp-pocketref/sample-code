// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <random>

using namespace std;

int main()
{
  random_device seed_gen;
  mt19937 engine{seed_gen()};

  // 平均0.0、標準偏差1.0で正規分布させる
  normal_distribution<double> dist{0.0, 1.0};

  for (int i = 0; i < 10; ++i) {
    double result = dist(engine);
    cout << result << endl;
  }
}