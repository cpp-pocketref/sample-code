// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <memory>

using namespace std;

template <class T, class... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

struct X {
  X(int, double, char) {}
};

void f() {
  // Xクラスの動的リソースを作成
  unique_ptr<X> p = make_unique<X>(1, 3.14, 'a');
}

int main() {
  f();
}

