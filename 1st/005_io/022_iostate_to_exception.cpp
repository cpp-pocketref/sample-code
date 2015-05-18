// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  try {
    ifstream is("qawsedreftgyhujikolp"); // 存在しないファイルを指定
    is.exceptions(ios_base::failbit);
  } catch (const ios_base::failure& e) {
    cerr << "ファイルの読み取りができませんでした" << endl;
  }
}
