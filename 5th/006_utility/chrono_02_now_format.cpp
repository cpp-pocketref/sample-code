// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
  // 実装定義の時間単位を持つUTCタイムゾーンの現在日時
  system_clock::time_point now = system_clock::now();

  // 秒単位を持つUTCタイムゾーンの現在日時
  sys_seconds sec_now = floor<seconds>(now);

  // 現在のタイムゾーンで現在日時を出力する。
  // (コンピュータに日本のタイムゾーンが設定されていたら、
  // 日本の現在日時が出力される)
  cout << "1 : " <<
    zoned_time{current_zone(), now} << endl;
  cout << "2 : " <<
    zoned_time{current_zone(), sec_now} << endl; // 秒単位

  // UTCタイムゾーンで現在日時を出力する
  cout << "3 : " << sec_now << endl;

  // タイムゾーンを明示的に指定して現在日時を出力する
  cout << "4 : " << zoned_time{"Asia/Tokyo", sec_now} << endl;
  cout << "5 : " << zoned_time{"UTC", sec_now} << endl;

  // 日時フォーマットを指定して出力
  cout << "6 : " <<
    format("%Y年%m月%d日 %H時%M分%S秒",
           zoned_time{"Asia/Tokyo", sec_now}
    ) << endl;

  // 日付だけ、時間だけ出力
  // (引数位置の指定 {0} と組み合わせて書式を指定できる)
  cout << "7 : " <<
    format("{:%Y年%m月%d日}",
      zoned_time{"Asia/Tokyo", sec_now}) << endl;
  cout << "8 : " <<
    format("{0:%H時%M分%S秒}",
      zoned_time{"Asia/Tokyo", sec_now}) << endl;
}