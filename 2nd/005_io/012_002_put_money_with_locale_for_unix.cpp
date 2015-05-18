// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {
  const char* localeSample[] = {
    "ja_JP.UTF-8",
    "en_US.UTF-8",
    "de_DE.UTF-8",
    "en_GB.UTF-8",
    "zh_CN.UTF-8",
  };

  const char* m = "-1234567";

  cout << showbase;
  for (const char* loc : localeSample) {
    locale targetLocale(loc);
    cout.imbue(targetLocale);
    cout << put_money(m, false) << '\t'
         << put_money(m, true) << "\t(" << loc << ")"
         << endl;
  }
}
