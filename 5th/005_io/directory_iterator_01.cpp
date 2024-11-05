// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <algorithm>
#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

void print_directory_entry(const fs::directory_entry& entry) {
  if (entry.is_directory()) {
    cout << entry.path() << " is a directory" << endl;
  } else if (entry.is_regular_file()) {
    cout << entry.path() << " is a file" << endl;
  }
}

int main() {
  fs::create_directory("aaa");
  // ofstream の一時オブジェクトを構築し、aaa/bbb.txtを作成している。
  // 参照 link:io/fstream
  ofstream {"aaa/bbb.txt"};

  const fs::directory_iterator end;
  const fs::recursive_directory_iterator end_r;

  try {
    // 現在のディレクトリ直下のファイルを探索するイテレータ
    fs::directory_iterator it{"."};

    // イテレータとfor文を使用してファイルを列挙する
    cout << "#1" << endl;
    for ( ; it != end; ++it) {
      print_directory_entry(*it);
    }
  } catch (const fs::filesystem_error& e) { /* エラーハンドリング */ }

  try {
    // 現在のディレクトリ以下のファイルを再帰的に探索するイテレータ
    fs::recursive_directory_iterator it_r{"."};

    // イテレータとアルゴリズムと組み合わせてファイルを列挙する
    cout << "#2" << endl;
    for_each(it_r, end_r,
             [](const fs::directory_entry& entry) {
                print_directory_entry(entry);
             });
  } catch (fs::filesystem_error& e) { /* エラーハンドリング */ }
}