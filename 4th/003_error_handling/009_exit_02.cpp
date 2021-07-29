// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <cstdlib>

using namespace std;

struct X {
  ~X() { cout << "X dtor" << endl; }
};

X x;

int main() {
  quick_exit(0); // システムを終了させる(ステータスコードは0)
}