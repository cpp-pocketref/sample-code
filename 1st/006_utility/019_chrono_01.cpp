// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
  // 現在日時を取得
  system_clock::time_point p = system_clock::now();

  // エポックからの経過時間(秒)を取得
  seconds s = duration_cast<seconds>(p.time_since_epoch());

  cout << s.count() << endl;
}

