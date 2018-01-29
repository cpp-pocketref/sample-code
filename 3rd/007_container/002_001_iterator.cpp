// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>

template <class Iterator, class T>
Iterator my_find(Iterator first, Iterator last, T value) {
  while (first != last) {
    if (*first == value) {
      return first;
    }
    ++first;
  }
  return first; // 範囲の終端まで到達していたら、見つからなかったとみなす
}

using namespace std;

int main() {
  // コンテナから値3を検索する
  vector<int> v = {1, 2, 3, 4, 5};
  decltype(v)::iterator it = my_find(v.begin(), v.end(), 3);
  if (it != v.end()) { // 見つかった
    cout << *it << endl; // 見つかった要素を参照する。3が出力される
  }
  else {
    // 見つからなかった
  }
}

