// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include "gcc_demangle.h"

struct A {
  int a;
  operator int() { std::cout << "cast!!" << std::endl; return a; }
  virtual ~A() {}
};
struct B {
  int a;
  int b;
  int getA() { return a; }
  virtual ~B() {}
};

struct D : virtual A, B {
};

struct C { long l; };

struct B1 { virtual ~B1() = default; };
struct D1 : B1 {};
struct D2 : B1 {};


template<typename T1, typename T2> void do_cast(T2& t2) { dynamic_cast<T1&>(t2); }

int main()
{
  using namespace std;
  int unsigned typedef UINT;
  int typedef const unsigned volatile CUint;
  A a;
  int b = reinterpret_cast<int&>(a);
  A c = reinterpret_cast<A&>(b);
  B d = reinterpret_cast<B&>(c);
  A e = reinterpret_cast<A&>(d);
  int f = int(c);
//  int g = static_cast<int>(c);
  if(b == 1 and f == 1) {
  }
//  C h;
//  long i = reinterpret_cast<long>(h);
  D dv;
  auto cvp = dynamic_cast<const void*>(&d);
  cout << demangle(cvp) << endl;
//  A& da = dynamic_cast<A&>(dv);
//  D& dd = dynamic_cast<D&>(da);
//  B& db = dynamic_cast<B&>(da);
//  D& dsd = static_cast<D&>(da);
  auto db1 = 12.34f;
  db1 = 1.234e+1;
  std::cout << db1 << std::endl;
  std::cout << gcc_demangle::demangle(1) << std::endl;
  short sv = 1;
  std::cout << gcc_demangle::demangle(sv) << std::endl;
  std::cout << gcc_demangle::demangle(db1) << std::endl;
  std::cout << gcc_demangle::demangle(1.2e-1l) << std::endl;

  D1 d1;
  B1& b1 = dynamic_cast<B1&>(d1);
  try {
    D2& d2 = dynamic_cast<D2&>(b1);
  } catch(std::bad_cast) {
    cout << "std::bad_cast has thrown" << endl;
  }

  B1* b1p = dynamic_cast<B1*>(&d1);
  D2* d2p = dynamic_cast<D2*>(&b1);
  cout << &d1 << endl;
  cout << b1p << endl;
  cout << d2p << endl;
  auto v = &B::getA;
  B bb;
  (bb.*v)();
}

