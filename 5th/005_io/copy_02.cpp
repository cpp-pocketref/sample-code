// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

int main() {
  fs::create_directory("a");
  fs::create_directory("b");
  ofstream{"a/file.txt"};
  ofstream{"b/file.txt"};

  // "a/file.txt"ファイルが存在する前提として、
  // "b/file.txt"がすでに存在していたら上書きする
  fs::copy_file(
    "a/file.txt",
    "b/file.txt",
    fs::copy_options::overwrite_existing);

  // 正常にコピーされたかどうかを確認する
  if (fs::exists("b/file.txt")) {
    cout << "成功" << endl;
  }
  else {
    cout << "失敗" << endl;
  }
}