// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <chrono>

using namespace std;

int main()
{
  using namespace std::chrono_literals;
  auto sec = 30s;  // seconds型のオブジェクトを構築する
  auto min = 1min; // minutes型のオブジェクトを構築する

  auto sum = sec + min; // seconds + minutes = seconds
  cout << sum.count() << "秒" << endl;
}