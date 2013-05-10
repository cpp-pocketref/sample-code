// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> v = {1, 2, 3, 4, 5, 6};

  // 値3を検索する
  auto three = find(v.cbegin(), v.cend(), 3);
  if (three != v.cend()) {
    cout << *three << endl;
  }
  else {
    cout << "見つからなかった" << endl;
  }

  // 8より大きい値を検索する
  auto over8 = find_if(v.cbegin(), v.cend(), [](int n) { return n > 8; });
  if (over8 != v.cend()) {
    cout << *over8 << endl;
  }
  else {
    cout << "見つからなかった" << endl;
  }
}
