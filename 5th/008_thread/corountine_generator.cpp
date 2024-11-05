// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <generator>
#include <iostream>
#include <ranges>

using namespace std;

generator<int> fibonacci() {
  int a = 0;
  int b = 1;

  for ( ; ; ) {
    int c = a + b;
    a = b;
    b = c;
    co_yield a;
  }
}

int main() {
  for (int n : fibonacci() | views::take(10)) {
    cout << n << " ";
  }
}