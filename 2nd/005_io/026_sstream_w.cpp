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
  locale currentLoc("");
  wcout.imbue(currentLoc);
  wcerr.imbue(currentLoc);

  wostringstream os;
  os.imbue(currentLoc);

  int x = 3 + 4;
  os << L"3 + 4 = " << x;
  wstring output = os.str();

  wcout << output << endl;

  wistringstream is(L"1000");
  is.imbue(currentLoc);

  int input;
  is >> input;

  wcout << input << endl;
}
