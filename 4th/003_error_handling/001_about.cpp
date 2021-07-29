// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <stdexcept>

using namespace std;

void g() {
  throw runtime_error{"エラーが発生した！"};
}

void f() {
  try {
    g();
  }
  catch (runtime_error& e) { // 関数f()で送出された例外を捕捉
    cerr << e.what() << endl; // エラーメッセージを取得
    throw; // 捕捉した例外を再送出
  }
  // exceptionクラスを継承したすべての例外オブジェクトを捕捉
  catch (exception& e) {
    cerr << "exceptionを継承した例外オブジェクトが送出された" << endl;
  }
  // あらゆる例外を捕捉
  catch (...) {
    cerr << "何かの例外オブジェクトが送出された" << endl;
  }
}

int main() {
  f();
}
