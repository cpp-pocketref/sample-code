// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);

  for (;;) {
    int c = cin.get();
    if (c == EOF) {
      break;
    }
    cout.put(static_cast<char>(c));
  }
}
