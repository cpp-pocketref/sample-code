// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <format>

using namespace std;

int main() {
  // 右寄せ
  cout << format("{:>5}", "123") << endl;
  cout << format("{:>5}", 1234) << endl;
  cout << format("{:>5}", 12345) << endl;

  // *で埋めて中央寄せ
  cout << format("{:*^15}", "Hello") << endl;
}