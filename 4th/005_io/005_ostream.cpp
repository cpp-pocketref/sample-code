// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "Irowa nioedo chirinuru wo";
  char c = 'A';
  int i = 10;
  double d = 20.25;
  long double ld =6.62606957e-34;

  void* p = &c;

  cout << 'A';
  cout << " Text\n";
  cout << s << '\n' << flush;
  cout << 0 << ' ' << i << '\n';
  cout << d << ' ' << ld << '\n';
  cout << p << endl;
}
