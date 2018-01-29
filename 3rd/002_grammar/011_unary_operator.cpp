// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <typeinfo>
#include <cstdint>
using namespace std;

struct Base {
  virtual ~Base() {}
  int baseMember;
};

struct Derived : Base {
  long double derivedMember;
};

int main()
{
  Derived   d;
  Base&     b = d;

  cout << typeid(Base).name() << ":" << sizeof(Base) << ":" << alignof(Base) << endl;
  cout << typeid(Derived).name() << ":" <<  sizeof(Derived) << ":" << alignof(Derived) << endl;
  cout << typeid(b).name() << ":" <<  sizeof(b) << ":" << alignof(b) << endl;
  cout << typeid(d).name() << ":" <<  sizeof(d) << ":" << alignof(d) << endl;
  std::size_t s = alignof 1+2;
  cout << s << endl;
}
