// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6};

  if (all_of(v.begin(), v.end(), [](int x) { return x >= 2; })) {
    cout << "すべての要素が2以上" << endl;
  }
  else {
   cout << "2未満の要素が含まれる" << endl;
  }

  if (any_of(v.begin(), v.end(), [](int x) { return x == 4; })) {
    cout << "値4と等しい要素が含まれている" << endl;
  }
  else {
    cout << "値4と等しい要素は含まれない" << endl;
  }

  if (none_of(v.begin(), v.end(), [](int x) { return x <= -1; })) {
    cout << "-1以下の値が含まれていない" << endl;
  }
  else {
    cout << "-1以下の値が含まれている" << endl;
  }
}