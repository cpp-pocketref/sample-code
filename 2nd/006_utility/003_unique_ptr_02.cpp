// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <cassert>
#include <memory>
#include <vector>

using std::vector;
using std::unique_ptr;

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
  unique_ptr<X> p(new X);

  vector<unique_ptr<X>> v;
  v.push_back(move(p)); // pが指すリソースの管理をvに移動する
}

int main() {
  f();
  assert(ctorCount == 1);
  assert(dtorCount == 1);
}

