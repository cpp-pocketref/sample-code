// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  cout << "---- 標準 (noboolalpha) ----" << endl;
  cout << true << endl;
  cout << false << endl;

  cout << "---- boolalpha ----" << endl;
  cout << boolalpha;
  cout << true << endl;
  cout << false << endl;

  cout << "---- noboolalpha ----" << endl;
  cout << noboolalpha;
  cout << true << endl;
  cout << false << endl;
}
