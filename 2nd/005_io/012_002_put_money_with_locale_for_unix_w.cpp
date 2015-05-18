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
  const char* localeSample[] = {
    "ja_JP.UTF-8",
    "en_US.UTF-8",
    "de_DE.UTF-8",
    "en_GB.UTF-8",
    "zh_CN.UTF-8",
  };

  const wchar_t* m = L"-1234567";

  wcout << showbase;
  for (const char* loc : localeSample) {
    // const char*文字列 (loc) をwcoutで出力していることに注意。
    // これは可搬性（ポータビリティ）がない。
    locale targetLocale(loc);
    wcout.imbue(targetLocale);
    wcout << put_money(m, false) << L'\t'
          << put_money(m, true) << L"\t(" << loc << L")"
          << endl;
  }
}
