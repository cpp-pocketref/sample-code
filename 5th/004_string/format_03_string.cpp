// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <format>

using namespace std;

int main() {
  cout << format("{}", "Hello") << endl;
  cout << format("{:?}", "Hello") << endl;
  cout << format("{:?}", "Hello\nWorld") << endl;
}