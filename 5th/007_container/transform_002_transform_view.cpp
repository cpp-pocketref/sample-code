// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

int main(){
  vector<int> v = {1, 2, 3, 4};

  for (int x : v | views::transform([](int n) { return n * 10; })) {
    cout << x << endl;
  }
}