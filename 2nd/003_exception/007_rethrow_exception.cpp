// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <exception>

using namespace std;

class xxx : public exception { };
class yyy : public exception { };

void throw_and_print(exception_ptr e) {
  try {
    rethrow_exception(e);
  }
  catch (xxx&) {
    cerr << "xxx exception" << endl;
  }
  catch (yyy&) {
    cerr << "yyy exception" << endl;
  }
}

int main() {
  exception_ptr err1 = make_exception_ptr(xxx());
  throw_and_print(err1);
  try {
    throw yyy();
  }
  catch (...) {
    exception_ptr err2 = current_exception();
    throw_and_print(err2);
  }
}
