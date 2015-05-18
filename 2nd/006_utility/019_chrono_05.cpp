// Copyright (c) 2012-2014
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <chrono>

int main()
{
  using namespace std::chrono_literals;
  auto sec = 30s;  // seconds型のオブジェクトを構築する
  auto min = 1min; // minutes型のオブジェクトを構築する

  auto sum = sec + min; // seconds + minutes = seconds
  std::cout << sum.count() << "秒" << std::endl;
}
