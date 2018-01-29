// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

struct base {
  virtual void override() {}
  virtual void final() {}
};

struct final final : base {
  void override() override {}
//  void final() final {}
};

int main()
{
//  int a\U2460;
  final d;
}
