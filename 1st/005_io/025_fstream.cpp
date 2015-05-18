// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ofstream ofs("sample.txt");
  ofs << "Sample: " << 19 << endl;
  ofs.close();

  ifstream ifs("sample.txt");
  if (ifs) {
    string s;
    int i;
    ifs >> s >> i;

    cout << s << endl;
    cout << i << endl;
  }
  else {
    cerr << "ファイルを開くことに失敗しました。" << endl;
  }
}
