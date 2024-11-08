// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <filesystem>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

int main() {
  fs::create_directory("dir1");
  fs::create_directory("dir1/x");
  fs::create_directory("dir1/x/y");
  // 正常にディレクトリが作成されたかどうかを確認する
  if (fs::exists("dir1/x/y")) {
    cout << "ディレクトリ作成成功" << endl;
  }
  else {
    cout << "ディレクトリ作成失敗" << endl;
  }

  // dir2を作り、その中にxを作り、さらにその中にyを作る。
  fs::create_directories("dir2/x/y");
  // 正常にディレクトリが作成されたかどうかを確認する
  if (fs::exists("dir2/x/y")) {
    cout << "ディレクトリ作成成功" << endl;
  }
  else {
    cout << "ディレクトリ作成失敗" << endl;
  }
}