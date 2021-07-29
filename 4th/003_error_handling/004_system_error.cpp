// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include <system_error>
using namespace std;

// サーバに接続を試みるOSのAPI
int connect_to_server_api()
{
  return 503;
}

int main()
{
  try {
    if (connect_to_server_api() == 503) {
      // ネットワークがダウンしている。
      // 503は「サービスが利用できない」ことを
      // 表すHTTPのステータスコード。
      error_code ec = make_error_code(errc::network_down);
      throw system_error{ec};
    }
  }
  catch (system_error& e) {
    error_code ec = e.code();
    cout << ec.message() << endl;
  }
}
