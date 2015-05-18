// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <exception>

using namespace std;

class xxx : public exception { };
class yyy : public exception { };

int main() {
  try {
    try {
      try {
        throw xxx();
      }
    catch (...) {
        throw nested_exception();
      }
    }
    catch (nested_exception& n) {
      n.rethrow_nested();
    }
  }
  catch (xxx&) {
    cerr << "xxx exception" << endl;
  }

  try {
    try {
      try {
        throw xxx();
      }
    catch (...) {
        throw_with_nested(yyy());
      }
    }
  catch (yyy& e) {
      rethrow_if_nested(e);
      cerr << "no nested_exception" << endl;
    }
  }
  catch (xxx&) {
    cerr << "xxx exception" << endl;
  }

  try {
    try {
      throw yyy();
    }
    catch (yyy& e) {
      rethrow_if_nested(e);
      cerr << "no nested_exception" << endl;
    }
  }
  catch (yyy&) {
    cerr << "yyy exception" << endl;
  }
}
