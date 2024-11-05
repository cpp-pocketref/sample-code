// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <filesystem>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

int main() {
  fs::path tmp = fs::absolute("./tmp_for_test");
  fs::create_directory(tmp);
  fs::current_path(tmp);
  fs::remove_all(tmp);

  error_code error;
  fs::path cwd = fs::current_path(error);
  if (error) {
    cout << "現在の作業パスの取得に失敗 : " << error.message() << endl;
  }

  fs::path new_dir = "/foo/bar/new_directory"; // 親ディレクトリが存在しないためエラーとなる
  bool created = fs::create_directory(new_dir, error);
  if (!created) {
    if (error) {
      cout << "ディレクトリの作成に失敗 : " << error.message() << endl;
    } else {
      // ディレクトリは作成されなかったがエラーではない
      // （ディレクトリが既に存在していた）
    }
  }

  try {
    fs::path src = "./copy_from.txt";
    fs::path dest = "./copy_to.txt";
    bool copied = fs::copy_file(src, dest, fs::copy_options::skip_existing);
    if (!copied) {
      // ファイルが存在したためコピーされなかった
    }
  } catch (fs::filesystem_error& e) {
    cout << e.path1() << " から " << e.path2() << " へのコピーに失敗" << endl;
    cout << e.what() << endl;
  }
}