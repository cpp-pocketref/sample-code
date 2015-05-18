// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  wstring s = L"Irowa nioedo chirinuru wo";
  wchar_t c = L'A';
  int i = 10;
  double d = 20.25;
  long double ld =6.62606957e-34;

  void* p = &c;

  wcout << L'A';
  wcout << L" Text\n";
  wcout << s << L'\n' << flush;
  wcout << 0 << L' ' << i << L'\n';
  wcout << d << L' ' << ld << L'\n';
  wcout << p << endl;
}
