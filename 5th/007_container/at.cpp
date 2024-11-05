// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <stdexcept>
#include <string>
#include <map>

using namespace std;

int main() {
  map<string, int> m = {{"a", 1}, {"c", 3}};

  try {
    cout << m.at("a") << endl;
    cout << m.at("b") << endl;
  }
  catch (out_of_range& e) {
    cout << e.what() << endl;
  }
}