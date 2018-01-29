// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <memory>

using namespace std;

struct X {
  X(int, double, char) {}
};

void f() {
  // Xクラスの動的リソースを作成
  shared_ptr<X> p = make_shared<X>(1, 3.14, 'a');
}

int main() {
  f();
}

