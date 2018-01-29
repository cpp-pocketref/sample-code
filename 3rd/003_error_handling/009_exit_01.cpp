// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <cstdlib>

using namespace std;

struct X {
  ~X() { cout << "X dtor" << endl; }
};

void on_exit() {
  cout << "on exit" << endl;
}

X x;

int main() {
  atexit(on_exit);
  exit(0);
}

