// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cout << setfill('0');
  cout << '|' << setw(4) << 1 << '|' << endl;
  cout << '|' << setw(4) << 12 << '|' << endl;
  cout << '|' << setw(4) << 123 << '|' << endl;
  cout << '|' << setw(4) << 1234 << '|' << endl;
}
