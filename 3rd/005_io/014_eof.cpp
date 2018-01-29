// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>

using namespace std;

int main() {
  while (cin) { // あるいはwhile(!cin.eof()) {
    string s;
    cin >> s;
    cout << s << endl;
  }
}
