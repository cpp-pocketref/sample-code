// Copyright (c) 2015
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <iomanip>
#include <locale>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  wstring original_str = LR"(C:\dir\file)";
  wcout << L"元データ: " << original_str << endl;

  wstringstream ss;
  ss << quoted(original_str) << endl;
  wcout << L"出力結果: " << ss.str();

  wstring decoded_str;
  ss >> quoted(decoded_str);
  wcout << L"復元結果: " << decoded_str << endl;
}
