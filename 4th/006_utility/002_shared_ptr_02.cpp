// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <cassert>
#include <memory>

using std::shared_ptr;

namespace {
  std::size_t ctorCount = 0;
  std::size_t dtorCount = 0;
}

class X {
public:
  X() { ++ctorCount; }
  ~X() { ++dtorCount; }
};

void f() {
  shared_ptr<X> p(new X());
  p.reset(new X()); // 構築し直す
}

int main() {
  f();
  assert(ctorCount == 2);
  assert(dtorCount == 2); // reset時にデストラクタが呼ばれている
}

