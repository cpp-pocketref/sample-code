// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> v1 = {1, 2, 3, 4};
  vector<int> v2 = {5, 5, 6, 6};

  transform(v1.cbegin(), v1.cend(),
            ostream_iterator<string>(cout, "\n"),
            [](int x) { return "[" + to_string(x) + "]"; });

  cout << "\n";

  transform(v1.cbegin(), v1.cend(),
            v2.cbegin(),
            ostream_iterator<int>(cout, "\n"),
            [](int l, int r) { return l * r; });
}
