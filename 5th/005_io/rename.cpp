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
  // コピーするためのファイルを、事前に用意しておく
  fs::path from_path{"file_a"};
  ofstream file{from_path};
  file.close();

  fs::path to_path{"file_b"};

  // from_pathのパスにあるファイルを、
  // to_pathのパスに名称変更
  fs::rename(from_path, to_path);

  // 正常に名前が変更されたかどうかを確認する
  cout << fs::exists(from_path) << endl; // falseとなる
  cout << fs::exists(to_path) << endl;   // trueとなる
}