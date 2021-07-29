// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <chrono>
#include <type_traits>

using namespace std;
using namespace chrono;

int main() {
  {
    auto ms = seconds(3) + milliseconds(20);
    static_assert(is_same<decltype(ms), milliseconds>::value, "");
  }
  {
    milliseconds ms = seconds(3) + milliseconds(20);
    cout << ms.count() << endl;
  }
}

