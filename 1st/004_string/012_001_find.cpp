// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  string x = "abcabxabcc";
  cout << "x:" << x << endl;
  cout << "x.find(\"abc\"):" << x.find("abc") << endl;
  cout << "x.find(\"abc\", 1):" << x.find("abc", 1) << endl;
  cout << "x.find(\"abc\", 1, 2):" << x.find("abc", 1, 2) << endl;
  cout << "x.find(\'c\'):" << x.find('c') << endl;
}
