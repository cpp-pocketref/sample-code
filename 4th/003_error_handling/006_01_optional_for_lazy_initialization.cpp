// Copyright (c) 2012-2020
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <optional>
#include <string>
#include <sstream>
#include <iostream>
#include <stdexcept>

using namespace std;

// ストリームからデータを読み込む
// 失敗した場合は無効値を返す
template<class T>
optional<T> read_value(istream &is)
{
  T result;
  is >> result;
  if (is.fail()) {
    return nullopt; // 変換に失敗した場合は、失敗を表す無効な値を返す
  } else {
    return result; // 成功した場合は、値をそのまま返す
  }
}

void doSomething(int x) {
  cout << "Required : " << x << endl;
}

void doSomething2(int x) {
  cout << "Optional : " << x << endl;
}

void f(istream& is) {
  int required_value = 0; // 必須データ
  optional<int> optional_value; // 必須ではないデータ

  if (auto x = read_value<int>(is)) {
    required_value = *x;

    // 必須のデータが取得できた場合にのみ、
    // 追加のデータの取得を試行して、optional_valueを初期化
    optional_value = read_value<int>(is);
  } else {
    throw runtime_error{"データ列の内容が不正"};
  }

  doSomething(required_value);

  // optional_valueが取得できていたらそれを使用して追加の処理を行う
  if (optional_value) {
    doSomething2(*optional_value);
  }
}

int main() {
  stringstream ss;

  ss << 10 << " " << 20;
  f(ss);

  ss.clear();

  ss << 30;
  f(ss);
}
