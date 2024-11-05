// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  string x = "abc";
  printf("x:%s\n", x.c_str());

  char y[10];
  memcpy(y, x.data(), x.size());
  y[x.size()] = '\0';
  cout << "y:" << y << endl;
}