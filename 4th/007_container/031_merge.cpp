// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  map<int, string> m1 = {
    {1, "apple"},
    {2, "banana"}
  };
  multimap<int, string> m2 = {
    {2, "orange"},
    {2, "lemon"},
    {3, "melon"},
  };

  m1.merge(m2);

  for(auto [k, v] : m1) {
    cout << k << " : " << v << endl;
  }
  cout << "--" << endl;
  for(auto [k, v] : m2) {
    cout << k << " : " << v << endl;
  }
}
