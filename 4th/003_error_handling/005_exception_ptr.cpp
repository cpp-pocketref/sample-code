// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <stdexcept>
#include <exception>

using namespace std;

void print(exception_ptr e) {
  if (e == nullptr) {
    cout << "no exceptions" << endl;
  }
  else {
    cerr << "some exceptions" << endl;
  }
}

int main() {
  try {
    // ここでcurrent_exception()を呼び出すと空の例外ポインタが返される
    exception_ptr err = current_exception();
    print(err);
    throw runtime_error{"test for exception_ptr"};
  }
  catch (...) {
    // 送出中の例外オブジェクトへの例外ポインタを取得
    exception_ptr err = current_exception();
    print(err);

    try {
      // 保持している例外を再送出する
      rethrow_exception(err);
    }
    catch (runtime_error& e) {
      cout << "caught exception : " << e.what() << endl;
    }
  }
}
