// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

namespace Outer::Inner {
  void func() {
    cout << "Outer::Inner::func()" << endl;
  }
}

int main()
{
  Outer::Inner::func();
}
