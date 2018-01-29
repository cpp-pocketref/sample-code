// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <stdexcept>

[[noreturn]] void report_error()
{
  throw std::runtime_error("error");
}

int f(int x)
{
  if (x > 0) {
    return x;
  }
  report_error();
}

int main()
{
  f(1);
}
