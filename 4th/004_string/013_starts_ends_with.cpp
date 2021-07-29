// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>

using namespace std;

int main() {
  string x = "abcVVVxyz";

  if (x.starts_with("abc")) {
    cout << "先頭にマッチした" << endl;
  }

  if (x.ends_with("xyz")) {
    cout << "終端にマッチした" << endl;
  }
}