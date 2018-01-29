// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <functional>

using namespace std;

int main() {
  const string str = "0123456789";
  const string query = "345";

  const auto searcher =
    boyer_moore_horspool_searcher(query.begin(), query.end());

  const auto result = searcher(str.begin(), str.end());

  if (result.first != str.end()) {
    cout << "(" << distance(str.begin(), result.first) << ","
      << distance(str.begin(), result.second) << ")" << endl;
  }
}
