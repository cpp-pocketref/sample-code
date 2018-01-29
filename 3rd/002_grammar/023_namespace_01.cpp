// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include "gcc_demangle.h"

// It cannot declare more than one functions which have a same name.
void func() { std::cout << "I'm func" << std::endl; }
//void func() { std::cout << "I'm func too" << std::endl; }

using namespace std;

namespace vector {}


typedef int f;
namespace N {
  struct X {
    friend void f(X& x);
    X() = default;
    int g() {
      int i = f(1);
      return i;
    }
  };
}

int v = 1;

namespace {
  auto lf = []{};
  inline namespace NS {
    template<typename T> struct A{};
  }
  template<typename T> void foo(const T&) {}
}

auto bar()->int { return 1; }

enum class E1 : int { E1_A };
enum class E2 { E1_A };

E1 a = E1::E1_A;

namespace Outer {
  void the_outer_func() {}
  namespace Inner {
    void the_inner_func() {}
  }
}

inline namespace in_name {
}

namespace A {
  namespace B {
  }
}


struct MyType{};
template<typename T> void func(const T&) { std::cout << "::func<T>()" << std::endl; }

namespace Name1 {
  struct MyType {};
//void func(const MyType&) { std::cout << "Name1::func" << std::endl; }
}

namespace Name2 {
  struct MyType {};
  void func(const MyType&) { std::cout << "Name2::func" << std::endl; }
}

namespace MyNamespace {
  struct MyType {};
  void func(const MyType&) {
    std::cout << "MyNamespace::func()" << std::endl;
  }
  inline namespace Local {
    void NotNeedNameSpecifier() {}
  }
  namespace Local {
    void NeedNameSpecifier() {}
  }
  namespace Local2 = Local;
}

int main()
{
  namespace OI = Outer::Inner;
  using namespace Outer::Inner;
  int i = v, v = 2;
  std::cout << N::X().g() << std::endl;
  std::cout << i << std::endl;
  std::cout << v << std::endl;
  std::cout << ::v << std::endl;

  OI::the_inner_func();
  the_inner_func();
  foo(NS::A<int>());

  struct S {
    int m;
  };

  std::cout << demangle(E1()) << std::endl;
  std::cout << demangle(E2()) << std::endl;

  func(MyType());
  func(Name1::MyType());
  func(Name2::MyType());
  func(MyNamespace::MyType());

  using Outer::the_outer_func;
  the_outer_func();
  MyNamespace::Local::NeedNameSpecifier();
  MyNamespace::Local::NotNeedNameSpecifier();
  MyNamespace::NotNeedNameSpecifier();
  MyNamespace::NeedNameSpecifier();
  MyNamespace::Local2::NotNeedNameSpecifier();
}
