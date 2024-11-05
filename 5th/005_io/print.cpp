// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <print>
#include <ostream>

using namespace std;

int main() {
  print("Hello {} {}\n", 123, "World");
  println("Hello {} {}", 123, "World");

  println(cerr, "Error! : {}", "エラー理由");
}