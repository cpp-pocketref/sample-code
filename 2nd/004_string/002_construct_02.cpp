// Copyright (c) 2012-2014
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>

int main()
{
  using namespace std::string_literals;

  auto str = "hello"s; // strはstd::string型
  std::cout << str << std::endl;

  auto u8str = u8"hello"s; // u8strはUTF-8のstd::string型
  auto u32str = U"hello"s; // u32strはstd::u32string型
}
