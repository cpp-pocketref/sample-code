// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <fstream>
#include <filesystem>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

int main() {
  // 削除するためのファイルを、事前に用意しておく
  fs::path sample_file{"sample_file"};
  ofstream file{sample_file};
  file.close();

  // ファイルを削除
  fs::remove(sample_file);
  // 正常に削除されたかどうかを確認する
  if (!fs::exists(sample_file)) {
    cout << "ファイル削除成功" << endl;
  }
  else {
    cout << "ファイル削除失敗" << endl;
  }

  // 削除するためのディレクトリを、事前に用意しておく
  fs::path sample_dir{"sample_dir"};
  fs::create_directory(sample_dir);

  // ディレクトリを削除 (ディレクトリが空でなければエラーとなる)
  fs::remove(sample_dir);
  // 正常に削除されたかどうかを確認する
  if (!fs::exists(sample_dir)) {
    cout << "ディレクトリ削除成功" << endl;
  }
  else {
    cout << "ディレクトリ削除失敗" << endl;
  }
}