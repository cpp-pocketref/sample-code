// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

// クラス、型の別名、変数を非推奨指定する
class [[deprecated]] Class {};
using uint_alias [[deprecated]] = unsigned int;
int variable [[deprecated]] = 0;

// 関数を非推奨指定する
[[deprecated]]
void f() {}

// メッセージを付加して、関数を非推奨指定する
[[deprecated("この関数はバージョンxから非推奨です。")]]
void g() {}

int main()
{
  g();
}

