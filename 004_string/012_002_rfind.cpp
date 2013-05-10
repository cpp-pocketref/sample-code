// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  string x = "abcabxabc";
  cout << "x:" << x << endl;
  cout << "x.rfind(\"abc\"):" << x.rfind("abc") << endl;
  cout << "x.rfind(\"abc\", 6):" << x.rfind("abc", 6) << endl;
  cout << "x.rfind(\"abc\", 5):" << x.rfind("abc", 5) << endl;
  cout << "x.rfind(\"abc\", 5, 2):" << x.rfind("abc", 5, 2) << endl;
  cout << "x.rfind(\'x\'):" << x.rfind('x') << endl;
}
