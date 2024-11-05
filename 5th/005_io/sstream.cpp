// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  ostringstream os;

  int x = 3 + 4;
  os << "3 + 4 = " << x;
  string output = os.str();

  cout << output << endl;

  istringstream is{"1000"};

  int input;
  is >> input;

  cout << input << endl;
}