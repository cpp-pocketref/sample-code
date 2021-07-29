// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <format>

using namespace std;

int main() {
  cout << format("Hello {0} World!", "C++") << endl;
  cout << format("答えは{}", 42) << endl;
  cout << format("{{}}") << endl;
}