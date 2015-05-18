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
    cout << "no exception" << endl;
  }
  else {
    cerr << "some exception" << endl;
  }
}

int main() {
  exception_ptr err1 = current_exception();
  print(err1);
  try {
    exception_ptr err2 = current_exception();
    print(err2);
    throw runtime_error("test for current_exception()");
  }
  catch (...) {
    exception_ptr err3 = current_exception();
    print(err3);
  }
}
