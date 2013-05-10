// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
  vector<char> data{'A', 'B', 'C', '\n'};
  ofstream ofs("out.dat");
  copy(data.cbegin(), data.cend(), ostreambuf_iterator<char>(ofs));
}
