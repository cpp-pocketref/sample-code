// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <fstream>
#include <iomanip>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

int main() {
  fs::path p{"a.txt"};

  // ofstream の一時オブジェクトを構築し、a.txtを作成している。
  // 参照 link:io/fstream
  ofstream{p};

  if (fs::exists(p)) {
    cout << "存在する" << endl;
  }
  else {
    cout << "存在しない" << endl;
  }

  fs::remove(p);

  if (fs::exists(p)) {
    cout << "存在する" << endl;
  }
  else {
    cout << "存在しない" << endl;
  }
}