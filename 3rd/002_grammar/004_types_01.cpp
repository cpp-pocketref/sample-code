// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <typeinfo>
#include <cassert>
#include "gcc_demangle.h"

enum direction1 { left, right, up, down };
enum direction2 { up, down, left, right };

enum class my_color { red = 1, blue = 1, green };
enum class color : int { red = 1, blue = 1, green };
enum rgb_color : unsigned char { red, blue, green };

enum class { one, two, three } number;
enum class { one, two, three };

struct S {
  enum { red, blue, green } color;
};

enum : char { one, two, three };
const S&& foo();

template<typename T1, typename T2> auto fuu(T1 t1, T2 t2)->decltype(T1() + T2()) { return t1 + t2; }

const char* rs = R"hoge(hogehoge"+")hoge";

int main()
{
  color c = color::red;
  rgb_color rgbc = rgb_color::blue;
  std::cout << sizeof c << std::endl;
  std::cout << sizeof rgbc << std::endl;
  int i = one;
  double d;
  std::cout << demangle<decltype(foo())>() << std::endl;
  std::cout << demangle(c) << std::endl;
  std::cout << demangle(rgbc) << std::endl;
  std::cout << demangle(d) << std::endl;
  std::cout << demangle(1 * 1.5) << std::endl;
  std::cout << demangle(fuu(1, 1.5)) << std::endl;
}
