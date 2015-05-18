// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6};

  cout << boolalpha;

  // すべての要素が2以上？
  cout <<  all_of(v.begin(), v.end(), [](int x) { return x >= 2; }) << endl;

  // 値4と等しい要素が含まれているか？　
  cout <<  any_of(v.begin(), v.end(), [](int x) { return x == 4; }) << endl;

  // -1以下の値が含まれていない？
  cout << none_of(v.begin(), v.end(), [](int x) { return x < -1; }) << endl;
}


