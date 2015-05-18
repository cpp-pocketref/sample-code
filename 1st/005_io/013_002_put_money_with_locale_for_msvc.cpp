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
    "Japanese_Japan.932",
    "English-usa_United states.932",
    "German_Germany.932",
    "English-uk_United kingdom.932",
    "Chinese-simplified_China.932",
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
