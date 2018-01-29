// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
  string original_str = R"(C:\dir\file)";
  cout << "元データ: " << original_str << endl;

  stringstream ss;
  ss << quoted(original_str) << endl;
  cout << "出力結果: " << ss.str();

  string decoded_str;
  ss >> quoted(decoded_str);
  cout << "復元結果: " << decoded_str << endl;
}
