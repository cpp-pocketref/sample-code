// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iterator>
#include <array>
#include <locale>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  array<int, 3> a = {1, 2, 3};
  copy(a.cbegin(), a.cend(), ostream_iterator<int, wchar_t>(wcout, L"\n"));
  copy(a.cbegin(), a.cend(), ostream_iterator<int, wchar_t>(wcout));
}
