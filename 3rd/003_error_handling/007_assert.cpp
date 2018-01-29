// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <cassert>

void f(int x) {
  assert(x != 0);
}

int main() {
  f(1); // OK
  f(0); // アサーション失敗
}
