// Copyright (c) 2012-2015
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  wcout << L'|' << setw(7) << L"Cat" << L'|' << endl;
  wcout << L'|' << setw(7) << L"Mouse" << L'|' << endl;
  wcout << L'|' << setw(7) << L"Elepant" << L'|' << endl;
  wcout << L'|' << setw(7) << L"Hippopotamus" << L'|' << endl;
  wcout << L'|' << L"Dog" << L'|' << endl; // 注意：setw(7)の効果は持続しない
}
