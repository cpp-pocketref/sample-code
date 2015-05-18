// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <stdexcept>

using namespace std;

void f(int i) {
  const int size = 3;
  int ar[size];

  if (i < 0 || i >= size) {
    throw out_of_range("範囲外の値が渡されました");
  }
}

int main() {
  try {
    f(5);
  }
  catch (out_of_range& e) {
    const char* message = e.what();
    cerr << message << endl;
//  throw;
  }
}
