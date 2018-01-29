// Copyright (c) 2012-2017
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
  cout << boolalpha;

  fs::path p{"a.txt"};
  
  // ofstream の一時オブジェクトを構築し、a.txtを作成している。
  // 参照 link:io/fstream
  ofstream{p};
    
  cout << fs::exists(p) << endl;
  fs::remove(p);
  cout << fs::exists(p) << endl;
}
