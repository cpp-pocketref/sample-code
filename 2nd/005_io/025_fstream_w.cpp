// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wcout.imbue(currentLoc);
  wcerr.imbue(currentLoc);

  wofstream ofs("sample.txt");
  ofs.imbue(currentLoc);
  ofs << L"Sample: " << 19 << endl;
  ofs.close();

  wifstream ifs("sample.txt");
  ifs.imbue(currentLoc);
  if (ifs) {
    wstring s;
    int i;
    ifs >> s >> i;

    wcout << s << endl;
    wcout << i << endl;
  }
  else {
    wcerr << L"ファイルを開くことに失敗しました。" << endl;
  }
}
