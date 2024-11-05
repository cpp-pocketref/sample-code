// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  map<string, int> m = {{"a", 1}, {"c", 3}};

  cout << m.insert({"b", 2}).second << endl;
  cout << m.insert({"a", 9}).second << endl;

  for (const auto& e : m) {
    cout << e.first << " : " << e.second << endl;
  }
}