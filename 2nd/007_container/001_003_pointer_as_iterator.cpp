// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>

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
  // 配列から3という値を検索する
  int ar[5] = {1, 2, 3, 4, 5};
  int* p = ::find(ar, ar + 5, 3);
  if (p != ar + 5) { // 見つかった
    cout << *p << endl; // 3が出力される
  }
}

