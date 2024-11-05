// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <string>

using namespace std;

int main() {
  string a = "ABC";
  u8string b = u8"ABC";   // C++20 : UTF-8
  // string b = u8"ABC";  // C++17 以前の環境ではこちらを使用する
  u16string c = u"ABC";   // C++11 : UTF-16
  u32string d = U"ABC";   // C++11 : UTF-32
  wstring e = L"ABC";
}