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

  // ‚Ü‚¾—v‘f‚ª‚È‚¢
  cout << v.empty() << endl;

  v.push_back(1); // —v‘f‚ð’Ç‰Á
  cout << v.empty() << endl;

  v.pop_back(); // ’Ç‰Á‚µ‚½—v‘f‚ðíœ
  cout << v.empty() << endl;
}
