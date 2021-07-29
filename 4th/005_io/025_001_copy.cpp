// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

int main() {
  // コピーするためのファイルを、事前に用意しておく
  fs::path from_path("file_a");
  ofstream file(from_path);
  file.close();

  fs::path to_path("file_b");

  // from_pathにあるファイルを、to_pathの場所にコピー。
  // from_pathとto_pathに、同じファイルができあがる
  fs::copy_file(from_path, to_path);

  // 正常にコピーされたかどうかを確認する
  cout << boolalpha << fs::exists(to_path) << endl;
}
