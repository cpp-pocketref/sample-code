// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <string>
#include <locale>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  wostringstream os;

  os << L"Bad";

  os.seekp(0, ios_base::beg);
  os << L"Good";

  wcout << os.str() << endl;
}
