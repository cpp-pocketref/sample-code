// Copyright (c) 2012-2024
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
  vector<int> v = {1, 2, 3, 4};

  transform(v.cbegin(), v.cend(),
            ostream_iterator<string>{cout, "\n"},
            [](int x) { return "[" + to_string(x) + "]"; });
}