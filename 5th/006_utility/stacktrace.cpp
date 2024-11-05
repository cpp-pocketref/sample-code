// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <stacktrace>

using namespace std;

void func1() { cout << stacktrace::current() << endl; }
void func2() { func1(); }
void func3() { func2(); }

int main()
{
    func3();
}