// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  ostringstream os;

  os << "Bad";

  os.seekp(0, ios_base::beg);
  os << "Good";

  cout << os.str() << endl;
}
