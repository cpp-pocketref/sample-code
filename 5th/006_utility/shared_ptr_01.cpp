// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <cassert>
#include <memory>

using std::shared_ptr;

namespace {
  std::size_t ctorCount = 0;
  std::size_t dtorCount = 0;
  std::size_t fooCount = 0;
  std::size_t barCount = 0;
}

class X {
public:
  X() { ++ctorCount; }
  ~X() { ++dtorCount; }
  void foo() { ++fooCount; }
  void bar() { ++barCount; }
};

void f() {
  shared_ptr<X> p{new X{}}; // newしたポインタからshared_ptrを構築
  {
    shared_ptr<X> q = p; // 2つのshared_ptrが同じリソースを参照する
    q->foo(); // ポインタが指しているオブジェクトのメンバにアクセスする
  } // qが破棄され、リソースを指しているshared_ptrが1つになる。
    // まだ解放されない

  p->bar(); // ここでもまだ使用可能
} // リソースを参照しているshared_ptrがなくなるので解放される

int main() {
  f();
  assert(ctorCount == 1);
  assert(dtorCount == 1);
  assert(fooCount == 1);
  assert(barCount == 1);
}