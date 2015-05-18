// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <ctime>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wcout.imbue(currentLoc);

  wcout << put_money(1234567890, false) << endl;
  wcout << showbase << put_money(L"1234567890", false) << endl;
  wcout << showbase << put_money(L"1234567890", true) << endl;
}
