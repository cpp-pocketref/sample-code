// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <exception>

using namespace std;

class xxx : public exception { };
class yyy : public exception { };

void print_nested_exception(exception_ptr e) {
  try {
    rethrow_exception(e);
  }
  catch (xxx& e) {
    cerr << "xxx exception" << endl;
    try {
      rethrow_if_nested(e);
    }
    catch (...) {
      print_nested_exception(current_exception());
    }
  }
  catch (yyy& e) {
    cerr << "yyy exception" << endl;
    try {
      rethrow_if_nested(e);
    }
    catch (...) {
      print_nested_exception(current_exception());
    }
  }
}

int main() {
  try {
    try {
      throw xxx();
    }
    catch (...) {
      throw_with_nested(yyy());
    }
  }
  catch (...) {
    print_nested_exception(current_exception());
  }
}
