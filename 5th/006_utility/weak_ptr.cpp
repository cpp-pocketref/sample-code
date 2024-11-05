// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <memory>

using namespace std;

class X {
public:
  int get() const { return 1; }
};

void f() {
  weak_ptr<X> wp;
  {
    shared_ptr<X> sp{new X()};
    wp = sp;

    // wpが監視しているshared_ptrオブジェクトが存在していれば、
    // lock()メンバ関数でshared_ptrオブジェクトを取得できる。
    if (shared_ptr<X> p = wp.lock()) {
      cout << "point 1 : " << p->get() << endl;
    }
    else {
      cout << "point 2 : sp is dead" << endl;
    }
  } // spが解放される

  if (shared_ptr<X> p = wp.lock()) {
    cout << "point 3 : " << p->get() << endl;
  }
  else {
    cout << "point 4 : sp is dead" << endl;
  }
}

int main() {
  f();
}
