// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout << "double floor : " << round(3.3) << endl;
  cout << "double ceil : " << round(3.8) << endl;

  cout << "float floor : " << round(3.3f) << endl;
  cout << "float ceil : " << round(3.8f) << endl;

  cout << "long double floor : " << round(3.3L) << endl;
  cout << "long double ceil : " << round(3.8L) << endl;
}

