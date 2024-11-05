// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <format>
#include <vector>
#include <map>

using namespace std;

int main() {
  vector<int> vi = {1, 10, 20};
  cout << format("{::#x}", vi) << endl;

  vector<string> vs = {"aaa", "bbb", "ccc"};
  cout << format("{}", vs) << endl;
  cout << format("{::}", vs) << endl;

  map<int, string> m = {
    {3, "aaa"},
    {1, "bbb"},
    {4, "ccc"}
  };
  cout << format("{}", m) << endl;
}