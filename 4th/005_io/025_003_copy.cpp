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
  fs::create_directories("a_dir/aa_dir");
  std::ofstream{"a_dir/aa_dir/file.txt"};
  fs::create_directory("b_dir");

  // "a_dir/aa_dir/file.txt"ファイルが存在する前提として、
  // "a_dir"ディレクトリを"b_dir"ディレクトリに再帰的にコピーする。
  // "b_dir"ディレクトリがすでに存在していたら上書きする
  fs::copy(
    "a_dir",
    "b_dir",
    fs::copy_options::recursive |
    fs::copy_options::overwrite_existing);

  // 正常にコピーされたかどうかを確認する
  cout << boolalpha << fs::exists("b_dir/aa_dir/file.txt") << endl;
}
