// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  for (double d = 2.0; d < 10.0; d += 1.0) {
    double result = sqrt(d);
    cout << result << endl;
  }

  cout << "error: " << sqrt(-1.0) << endl;
}
