// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout << "[round]" << endl;
  cout << "2.4 to " << round(2.4) << endl;
  cout << "2.5 to " << round(2.5) << endl;
  cout << "2.6 to " << round(2.6) << endl;

  cout << "\n[nearbyint]" << endl;
  cout << "2.4 to " << nearbyint(2.4) << endl;
  cout << "2.5 to " << nearbyint(2.5) << endl;
  cout << "2.6 to " << nearbyint(2.6) << endl;
}