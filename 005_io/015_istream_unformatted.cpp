// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <array>

using namespace std;

int main() {
  int c1 = cin.get();

  char c2;
  cin.get(c2);

  array<char, 16> r1;
  cin.read(r1.data(), r1.size());
  auto count_r1 = cin.gcount();

  char r2[16];
  cin.read(r2, sizeof r2);
  auto count_r2 = cin.gcount();

  array<char, 16> s1;
  auto count_s1 = cin.readsome(s1.data(), s1.size());

  char s2[16];
  auto count_s2 = cin.readsome(s2, sizeof s2);
}
