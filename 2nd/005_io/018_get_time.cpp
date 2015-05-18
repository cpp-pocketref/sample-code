// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
  tm t = {};

  istringstream is("2012/04/08 00:36:42");
  is >> get_time(&t, "%Y/%m/%d %H:%M:%S");

  cout << t.tm_year + 1900 << endl;
  cout << t.tm_mon << endl;
  cout << t.tm_mday << endl;
  cout << t.tm_hour << endl;
  cout << t.tm_min << endl;
  cout << t.tm_sec << endl;
}
