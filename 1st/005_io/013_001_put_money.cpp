// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {
  locale currentLoc("");
  cout.imbue(currentLoc);

  cout << put_money(1234567890, false) << endl;
  cout << showbase << put_money("1234567890", false) << endl;
  cout << showbase << put_money("1234567890", true) << endl;
}
