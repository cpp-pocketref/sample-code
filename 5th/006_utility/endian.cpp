// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <bit>

using namespace std;

int main()
{
  if (endian::native == endian::little) {
    cout << "現在の環境は: リトルエンディアン" << endl;
  } else if (endian::native == endian::big) {
    cout << "現在の環境は: ビッグエンディアン" << endl;
  } else {
    cout << "現在の環境は: その他のエンディアン" << endl;
  }

  uint16_t a = 0x1234;
  uint32_t b = 0x12345678;
  uint64_t c = 0x123456789abcdef0;

  cout << hex << "0x" << a << " => " << "0x" << byteswap(a) << endl;
  cout << hex << "0x" << b << " => " << "0x" << byteswap(b) << endl;
  cout << hex << "0x" << c << " => " << "0x" << byteswap(c) << endl;
}