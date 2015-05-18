// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <limits>

using namespace std;

int main() {
  cout << numeric_limits<int>::max() << endl;
  cout << numeric_limits<size_t>::max() << endl;
  cout << numeric_limits<double>::max() << endl;
  cout << boolalpha << numeric_limits<bool>::max() << endl;
}

