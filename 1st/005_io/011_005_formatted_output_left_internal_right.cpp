// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  wcout << L"---- left ----" << endl;
  wcout << left;
  wcout << L'|' << setw(4) << -1 << L'|' << endl;
  wcout << L'|' << setw(4) << -12 << L'|' << endl;
  wcout << L'|' << setw(4) << -123 << L'|' << endl;
  wcout << L"---- internal ----" << endl;
  wcout << internal;
  wcout << L'|' << setw(4) << -1 << L'|' << endl;
  wcout << L'|' << setw(4) << -12 << L'|' << endl;
  wcout << L'|' << setw(4) << -123 << L'|' << endl;
  wcout << L"---- right ----" << endl;
  wcout << right;
  wcout << L'|' << setw(4) <<-1 << L'|' << endl;
  wcout << L'|' << setw(4) <<-12 << L'|' << endl;
  wcout << L'|' << setw(4) <<-123 << L'|' << endl;
}
