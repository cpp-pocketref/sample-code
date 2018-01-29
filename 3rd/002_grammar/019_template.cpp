// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <typeinfo>
#include "gcc_demangle.h"
using namespace std;


/*
 * Example of Function Template
 */
template<typename T>


/*
 * Example of Variadic Templates
 */


/*
 * Example of Variadic Templates
 */
template<typename T> void show_types(const T&) {
  cout << gcc_demangle::demangle<T>() << endl;
}

template<typename T1, typename ... Types> void show_types(const T1&, Types ... tail) {
  cout << gcc_demangle::demangle<T1>() << endl;
  show_types(tail...);
}

template<typename ... Types> void func() { };

struct S {};



int main()
{
  show_types(1, 2.0, "hoge", S());
}
