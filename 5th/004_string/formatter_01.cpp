// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <format>

enum color { red, green, blue };

const char* color_names[] = { "red", "green", "blue" };

template<>
struct std::formatter<color> : std::formatter<const char*> {
  auto format(color c, std::format_context& ctx) const {
    return std::formatter<const char*>::format(color_names[c], ctx);
  }
};

using namespace std;

int main()
{
  cout << format("{}", red) << endl;
}