// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {
  locale currentLoc("");
  cout.imbue(currentLoc);

  time_t t = time(nullptr);
  const tm* lt = localtime(&t);
  cout << put_time(lt, "%c") << endl;
  cout << put_time(lt, "%x") << endl; // 日付のみ
  cout << put_time(lt, "%X") << endl; // 時刻のみ
}
