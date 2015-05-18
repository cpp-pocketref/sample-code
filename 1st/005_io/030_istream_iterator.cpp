// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main() {
  typedef istream_iterator<string> iter_type;
  vector<string> input{iter_type(cin), iter_type()};

  for (string s : input) {
    cout << s << endl;
  }
}
