// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <string>
#include <locale>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  wistringstream is(L"WINDY WOOD");

  wstring x, y, z;
  is >> x;
  auto pos = is.tellg();
  is >> y;

  is.seekg(pos);
  is >> z;

  wcout << x << L' ' << y << L' ' << z << endl;
}
