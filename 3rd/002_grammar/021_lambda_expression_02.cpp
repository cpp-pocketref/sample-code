// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
using namespace std;

class X {
  int x_ = 1;
public:
  void foo() {
    auto f = [this] {
      // ラムダ式内で、Xクラスのメンバ変数やメンバ関数を参照する。
      // privateメンバ関数も呼び出せる
      return x_ + bar();
    };

    cout << f() << endl; // 4が出力される
  }
private:
  int bar() const {
    return 3;
  }
};

int main() {
  X().foo();
}
