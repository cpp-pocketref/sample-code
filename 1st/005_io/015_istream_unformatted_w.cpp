// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <array>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wcin.imbue(currentLoc);

  int c1 = wcin.get();

  wchar_t c2;
  wcin.get(c2);

  array<wchar_t, 16> r1;
  wcin.read(r1.data(), r1.size());
  auto count_r1 = wcin.gcount();

  wchar_t r2[16];
  wcin.read(r2, sizeof r2);
  auto count_r2 = wcin.gcount();

  array<wchar_t, 16> s1;
  auto count_s1 = wcin.readsome(s1.data(), s1.size());

  wchar_t s2[16];
  auto count_s2 = wcin.readsome(s2, sizeof s2);
}
