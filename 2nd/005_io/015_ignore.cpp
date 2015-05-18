// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  int x;
  for (;;) {
    cout << "数値を入力してEnterを入力してください" << endl;
    if (cin >> x) {
      break;
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  cout << x << "が入力されました" << endl;
}
