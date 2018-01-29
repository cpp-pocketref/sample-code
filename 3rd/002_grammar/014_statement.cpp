// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
using namespace std;


void subVoidFunc() {}
void voidFunc()
{
  return subVoidFunc();
}

int main()
{
  voidFunc();
}
