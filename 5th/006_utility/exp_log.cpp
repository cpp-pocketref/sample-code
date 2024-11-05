// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  for (double x = 0.0; x < 10.0; x += 1.0) {
    // eを底とする指数関数 (eのx乗) を計算する
    double exp_value = exp(x);
    cout << "exp(" << x << ") : " << exp_value << endl;

    // eを底とする対数関数 (xがeの何乗か) を計算する
    double log_value = log(exp_value);
    cout << "log(" << exp_value << ") : " << log_value << endl;
  }
  cout << endl;

  // 2を底とする指数関数 (2のx乗) を計算する
  cout << "exp2(8) : " << exp2(8.0) << endl;

  // 2を底とする対数関数 (xが2の何乗か) を計算する
  cout << "log2(256) : " << log2(256.0) << endl;

  // 10を底とする対数関数 (xが10の何乗か) を計算する
  cout << "log10(10,000,000,000) : " << log10(10'000'000'000) << endl;
}