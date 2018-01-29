// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <functional>
#include <algorithm>
#include "gcc_demangle.h"

namespace ns1 { int a; }
namespace ns2 = ns1;

struct my_class {
  int x;
  void func() {
    int x;
    int a = 0;
    [&]{x;}; // well formed
    [=]{x;}; // well formed
    [&, a]{}; // well formed
    [=, &a]{}; // well formed
    [x]{x;}; // well formed
    [&,this]{}; // ill-formed
  }
};

struct ST {
  int x;
  void f() {
    int& x = this->x;
    [&x, this] { this->x = 1; }();
    [this] { this->x = 2; }();
  }
};

int global_value = 100;

void local_func() {}

//auto gf = [=]() {this->x;};

int main()
{
  ST st;
  st.x = 10;
  std::cout << st.x << std::endl;
  st.f();
  std::cout << st.x << std::endl;
  ns1:: a = 10;
  std::cout << ns2::a << std::endl;
  auto f = []{global_value = 10;};
  f();
  {
    ST st;
    auto f1 = [&] { const_cast<ST&>(st).x = 20; f(); global_value = 10; };
    f1();
    std::cout << st.x << std::endl;
  }
  std::cout << st.x << std::endl;

  void (*ptr_to_lambda)() = []{};
  ptr_to_lambda();
  int result = [](int l, int r )->int { return l * r; }(2, 5);
  std::cout << result << std::endl;
  std::cout << [](int l, int r )->int { return l * r; }(2, 5) << std::endl;
  std::function<void()> foo = local_func;
  std::function<void()> fooo = static_cast<std::function<void()>>([]{});
  auto fo = []{};
  std::cout << gcc_demangle::demangle(fo) << std::endl;
  [&st](int i = 53,...){st.x = 0; std::cout << i << std::endl;};
  int i = 1;
  //[i, &i](){}();
  int x = 5;
  auto lambda = [x](int v)->int { return v * x; };
  std::cout << lambda(5) << std::endl;
  std::function<void()> df = []{};
  [](int i) { std::cout << i << std::endl; }(10);
}
