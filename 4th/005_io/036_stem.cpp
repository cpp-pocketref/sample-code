// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
  cout << fs::path("a").stem() << endl;
  cout << fs::path("a.txt").stem() << endl;
  cout << fs::path("/abc/def/").stem() << endl;
  cout << fs::path("/tmp/archive.tar.gz").stem() << endl;
}
