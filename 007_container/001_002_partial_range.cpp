// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>

template <class Iterator, class T>
Iterator find(Iterator first, Iterator last, T value) {
  while (first != last) {
    if (*first == value) {
      return first;
    }
    ++first;
  }
  return first;
}

using namespace std;

int main() {
  // 範囲begin-begin+3から値2を検索する
  vector<int> v = {1, 2, 3, 4, 5};
  decltype(v)::iterator it = find(v.begin(), next(v.begin(), 3), 2);
}

