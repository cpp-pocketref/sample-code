// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

int main() {
  vector<int> xs = { 1, 2, 3, 4, 5, 6 };
  list<int> ys = { 100, 200 };

  // ysの先頭に値を追加するイテレータ
  front_insert_iterator<list<int>> it(ys);

  // copy_if()関数は、指定された範囲のうち条件を満たす要素を、
  // 第3実引数のイテレータに書き込むアルゴリズム
  copy_if(xs.begin(), xs.end(),
          it,
          [](auto n) { return n % 2 == 0; });

  for (int x : ys) { cout << x << " "; }
  cout << endl;

  ys = { 100, 200 };

  // back_inserter()を使用して
  // 末尾に値を追加する挿入イテレータを作成
  copy_if(xs.begin(), xs.end(),
          back_inserter(ys),
          [](auto n) { return n % 2 == 0; });

  for (int x : ys) { cout << x << " "; }
  cout << endl;
}


