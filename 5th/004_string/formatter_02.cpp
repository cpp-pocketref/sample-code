// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <format>

enum color { red, green, blue };

const char* color_names[] = { "red", "green", "blue" };
const char* jp_color_names[] = { "赤", "緑", "青" };

template<>
struct std::formatter<color> {
  bool is_jp = false;

  // コンパイル時の書式文字列の解析があるため、
  // constexprにする必要がある。
  // この関数に渡されるパラメータは、{:%j}の%以降。
  // 解析がおわった場所を指すイテレータを返す。
  constexpr auto parse(std::format_parse_context& ctx) {
    auto it = ctx.begin();
    if (*it == '%') {
      ++it;
      if (*it == 'j') {
        is_jp = true;
      }
      else if (*it == 'e') {
        is_jp = false;
      }
      ++it;
    }
    return it;
  }

  // format()関数は書式の情報をもたない。
  // parse()関数で解析した書式をメンバ変数で保持しておいて、
  // それをもとに書式化する
  auto format(color c, std::format_context& ctx) const {
    return std::format_to(ctx.out(), "{}",
      is_jp ? jp_color_names[c] : color_names[c]
    );
  }
};

using namespace std;

int main()
{
  cout << format("{:%j} {:%e}", red, blue) << endl;
}