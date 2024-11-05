// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <bit>

using namespace std;

int main() {
  cout << "-- has_single_bit --" << endl;
  cout << (has_single_bit(7u) ? "true" : "false") << endl; // false
  cout << (has_single_bit(8u) ? "true" : "false") << endl; // true

  cout << "-- bit_ceil/bit_floor --" << endl;
  cout << bit_ceil(5u) << endl;   // 8
  cout << bit_floor(5u) << endl;  // 4

  cout << "-- bit_width --" << endl;
  cout << bit_width(5u) << endl;  // 3
  cout << bit_width(16u) << endl; // 5

  cout << "-- rotl/rotr --" << endl;
  uint16_t x = 0b1100000000001000;
  cout << rotl(x, 2) << endl;     // 0b0000000000100011 == 35
  cout << rotr(x, 5) << endl;     // 0b0100011000000000 == 17920

  cout << "-- count --" << endl;
  uint8_t y = 0b00101111;
  cout << countl_zero(y) << " "   // 2
       << countl_one(y)  << " "   // 0
       << countr_zero(y) << " "   // 0
       << countr_one(y)  << " "   // 4
       << popcount(y)    << endl; // 5
}