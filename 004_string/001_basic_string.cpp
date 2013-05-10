// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <string>

using namespace std;

int main() {
  string a = "ABC";
  string b = u8"ABC";   // C++11 : UTF-8
  u16string c = u"ABC"; // C++11 : UTF-16
  u32string d = U"ABC"; // C++11 : UTF-32
  wstring e = L"ABC";
}
