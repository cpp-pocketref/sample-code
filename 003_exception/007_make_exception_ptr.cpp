// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <stdexcept>
#include <exception>

using namespace std;

class xxx : public exception { };

int main() {
  exception_ptr err = make_exception_ptr(xxx());
  try {
    rethrow_exception(err);
  }
  catch (xxx&) {
    cerr << "xxx exception" << endl;
  }
}
