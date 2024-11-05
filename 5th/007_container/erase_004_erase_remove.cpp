// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v1 = {0, 1, 2, 3, 4, 5};
  vector<int> v2 = {0, 1, 2, 3, 4, 5};

  // std::remove_if()とerase()メンバ関数を用いて偶数要素を削除する
  v1.erase(remove_if(v1.begin(),
                     v1.end(),
                     [](int n) { return n % 2 == 0; }),
           v1.end());

  // std::erase_if()を用いて奇数要素を削除する
  erase_if(v2, [](int n) { return n % 2 == 1; });
    
  for (int x : v1) {
    cout << x << endl;
  }
  cout << "--" << endl;
  for (int x : v2) {
    cout << x << endl;
  }
}