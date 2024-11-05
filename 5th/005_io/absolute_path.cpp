// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
  ofstream{"./a.txt"};

  cout << fs::absolute("./a.txt") << endl;
  cout << fs::canonical("./a.txt") << endl;
  cout << fs::weakly_canonical("./a.txt") << endl;
}