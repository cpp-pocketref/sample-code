// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
  cout << fs::path{"a.txt"}.filename() << endl;
  cout << fs::path{"/abc/def.ghi"}.filename() << endl;
  cout << fs::path{"/abc/def/"}.filename() << endl;
}