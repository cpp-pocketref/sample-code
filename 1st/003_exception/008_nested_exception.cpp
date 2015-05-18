// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <stdexcept>
#include <exception>

using namespace std;

void print(exception_ptr e) {
  if (e == nullptr) {
    cout << "no nested exception" << endl;
  }
  else {
    cerr << "some nested exception" << endl;
  }
}

int main() {
  nested_exception err1;
  print(err1.nested_ptr());
  try {
    throw runtime_error("test for nested_exception()");
  }
  catch (...) {
    nested_exception err2;
    print(err2.nested_ptr());
  }
}
