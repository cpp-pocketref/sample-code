// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <utility>
#include <iostream>

using namespace std;

int main() {
  string a;
  string b = "sample";
  string c(10, 't');
  string d = b;
  string e0 = b;
  string e = move(e0);
  string f(b.begin(), b.end());
  string g(string_view("sample"));
  cout << "a:" << a << endl;
  cout << "b:" << b << endl;
  cout << "c:" << c << endl;
  cout << "d:" << d << endl;
  cout << "e:" << e << endl;
  cout << "f:" << f << endl;
  cout << "g:" << g << endl;
}
