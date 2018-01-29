// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <limits>

auto mul(int r, int l)->int { return r * l; }
template<int v> int square(int val = v) { return val * val; }
template<typename T> struct limit {
  static const T val = 999;
  static T max() { return static_cast<T>(999); }
};

template<typename T> auto get_value()->T { return static_cast<T>(999); }

const int v = mul(2, 3);

const int v2 = square<std::numeric_limits<int>::max()>(5);
//const int v2 = numeric_limits<int>::max();

//int v3 = square<limit<int>::max()>();
//const int v3 = square<get_value<int>()>();
int v4 = square<limit<int>::val>();

int main()
{
}
