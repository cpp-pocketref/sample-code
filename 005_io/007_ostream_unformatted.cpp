// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <array>

using namespace std;

int main() {
  array<char, 4> array1 = {'A', 'B', 'C', '\n'};
  char array2[] = {'a', 'b', 'c', '\n'};

  cout.put('1');
  cout.put('\n');

  cout.write(array1.data(), static_cast<streamsize>(array1.size()));
  cout.write(array2, static_cast<streamsize>(sizeof array2));
}
