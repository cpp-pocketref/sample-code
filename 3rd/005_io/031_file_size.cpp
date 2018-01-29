// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
  fs::path p("test-file");

  // 事前にファイルを用意しておく
  ofstream file(p, ios_base::binary);
  file << "0123456789"; // 10バイト書き込む
  file.close();

  // ファイルサイズを取得
  uintmax_t n = fs::file_size(p);
  cout << n << endl;
}
