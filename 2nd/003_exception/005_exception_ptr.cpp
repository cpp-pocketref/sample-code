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
    cerr << "some exceptions" << endl;
  }
}

int main() {
  exception_ptr err1;
  print(err1);
  try {
    exception_ptr err2;
    print(err2);
    throw runtime_error("test for exception_ptr");
  }
  catch (...) {
    exception_ptr err3 = current_exception();
    print(err3);
  }
}
