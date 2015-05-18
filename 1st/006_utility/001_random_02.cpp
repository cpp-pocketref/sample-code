// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <random>

using namespace std;

int main() {
  random_device rdev; // 真の乱数生成器
  mt19937 engine(rdev()); // ランダムなシードを設定する
  uniform_int_distribution<> dist(0, 10);

  for (int i = 0; i < 5; ++i) {
    int result = dist(engine); // 乱数生成
    cout << result << endl;
  }
}

