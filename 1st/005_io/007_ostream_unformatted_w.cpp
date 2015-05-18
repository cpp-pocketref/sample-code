// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <array>

using namespace std;

int main() {
  wcout.imbue(locale(""));

  array<wchar_t, 4> array1 = {L'A', L'B', L'C', L'\n'};
  wchar_t array2[] = {L'a', L'b', L'c', L'\n'};

  wcout.put(L'1');
  wcout.put(L'\n');

  wcout.write(array1.data(), static_cast<streamsize>(array1.size()));
  wcout.write(array2, static_cast<streamsize>(sizeof array2 / sizeof array2[0]));
}
