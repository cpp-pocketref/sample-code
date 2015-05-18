// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <iomanip>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wcout.imbue(currentLoc);

  tm t = {};

  wistringstream is(L"2012/04/08 00:36:42");
  is.imbue(currentLoc);
  is >> get_time(&t, L"%Y/%m/%d %H:%M:%S");

  wcout << t.tm_year + 1900 << endl;
  wcout << t.tm_mon << endl;
  wcout << t.tm_mday << endl;
  wcout << t.tm_hour << endl;
  wcout << t.tm_min << endl;
  wcout << t.tm_sec << endl;
}
