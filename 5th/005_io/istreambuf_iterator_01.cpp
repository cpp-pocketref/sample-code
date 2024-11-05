// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
  ifstream ifs{"in.dat", ios_base::binary};
  vector<char> data{istreambuf_iterator<char>{ifs}, istreambuf_iterator<char>{}};

  ofstream ofs{"out.dat", ios_base::binary};
  copy(data.cbegin(), data.cend(), ostreambuf_iterator<char>{ofs});
}