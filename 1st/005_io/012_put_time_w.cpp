// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>
#include <ctime>
#include <locale>

using namespace std;

int main() {
  locale currentLoc("");
  wcout.imbue(currentLoc);

  time_t t = time(nullptr);
  const tm* lt = localtime(&t);
  wcout << put_time(lt, L"%c") << endl;
  wcout << put_time(lt, L"%x") << endl; // 日付のみ
  wcout << put_time(lt, L"%X") << endl; // 時刻のみ
}
