// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << boolalpha;

  vector<int> v;

  // �܂��v�f���Ȃ�
  cout << v.empty() << endl;

  v.push_back(1); // �v�f��ǉ�
  cout << v.empty() << endl;

  v.pop_back(); // �ǉ������v�f���폜
  cout << v.empty() << endl;
}
