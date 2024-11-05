// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>

using namespace std;

int main() {
  char c;
  int i;
  string s;
  cin >> c;
  cin >> i;
  cin >> s;
  // 上の3行は、次のようにも書けます。
  // cin >> c >> i >> s;
  cout << c << endl;
  cout << i << endl;
  cout << s << endl;
}