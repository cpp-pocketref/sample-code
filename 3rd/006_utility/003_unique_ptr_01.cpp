// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <cassert>
#include <memory>

using std::unique_ptr;

namespace {
  std::size_t ctorCount = 0;
  std::size_t dtorCount = 0;
  std::size_t fooCount = 0;
}

class X {
public:
  X() { ++ctorCount; }
  ~X() { ++dtorCount; }
  void foo() { ++fooCount; }
};

void f() {
  unique_ptr<X> p(new X()); // newしたポインタからunique_ptrを構築
//unique_ptr<X> q = p; // コンパイルエラー！コピー不可
  p->foo(); // ポインタが指しているオブジェクトのメンバにアクセスする
} // 解放される

int main() {
  f();
  assert(ctorCount == 1);
  assert(dtorCount == 1);
  assert(fooCount == 1);
}

