// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <string>

struct S{
  S() {}
  ~S() {}
};

union U {
  std::string s;
  std::vector<int> v;
  S sv;
  U() {};  // The default constructor is deleted, If the class has an object with non-trivial constructor.
  ~U() {}; // The destructor is deleted, If the class has an object with non-trivial destructor.
};

int main()
{
  U u;

  // To use std::string member s
  new (&u.s) std::string("Hello");
  std::cout << u.s << std::endl;

  // To use std::vector<int> member v
  u.s.std::string::~string();
  new (&u.v) std::vector<int>({ 0, 1, 2 });

  // To use S member sv
  u.v.std::vector<int>::~vector();
  new (&u.sv) S();

  // To destruct an object
  u.sv.~S();
}
