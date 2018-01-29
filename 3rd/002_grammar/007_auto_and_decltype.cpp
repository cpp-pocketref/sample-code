// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <typeinfo>
#include "gcc_demangle.h"

struct X{};

int f1() { return 0; }
decltype(f1()) f2() { return f1(); }

decltype(f2) f3;
int f3() { return 0; }

template<typename T1, typename T2> auto f3(T1 x, T2 y)->decltype(x + y) { return x + y; }
template<typename T1, typename T2> decltype(T1() + T2()) f4(T1 x, T2 y) { return x + y; }

auto f5()->int { return 0; }

X fx();

int main()
{
  using namespace std;
  using namespace gcc_demangle;

  auto lf1 = f1;
  auto lf2 = f2;
  cout << demangle(f1) << endl;
  cout << demangle(f2) << endl;
  cout << demangle(lf1) << endl;
  cout << demangle(lf2) << endl;
  cout << f3(1, 2.0) << endl;
  cout << demangle(f3(1, 2.0)) << endl;
  cout << demangle(f4(1, 2.0)) << endl;

  vector<int> vi(2);
  for(auto it = vi.begin(); it != vi.end(); ++it) *it = rand();
  for(auto v : vi) cout << v << endl;

  cout << "typeid" << endl;
  cout << (typeid(X) == typeid(fx())) << endl;
  cout << (typeid(X*) == typeid(fx())) << endl;

  cout << typeid(fx).hash_code() << endl;
  cout << demangle(typeid(fx)) << endl;
  try {
    int* p = reinterpret_cast<int*>(0);
    cout << typeid(*p).name() << endl;
  } catch(...) {
    cout << "Exception ocurred" << endl;
  }
}

