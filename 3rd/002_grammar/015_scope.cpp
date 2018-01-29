// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
using namespace std;

const char* value = "Global"; // グローバルスコープのオブジェクト

namespace NS1 {
  const char* value = "NS1";
  int value1 = 2;
  namespace NS2 {
  const char* value = "NS1::NS2";
    int value2 = 3;
    int func()
    {
      // value1／value2共に見えている
      return value1 + value2;
    }
  }
  int func()
  {
    // value2を参照するためにはスコープ解決演算子が必要
    return value1 * NS2::value2;
  }
}

struct S {
  const char* value = "Class S"; // クラスS内からはこちらのvalueが見える
  std::size_t valueSize = sizeof(value);
  decltype(value) getValue() {
    return value; // S::valueの4が返る
  }
};


int main()
{
  const char* value = "main function"; // この変数のスコープはmain内
  cout << NS1::func() << endl;
  cout << NS1::NS2::func() << endl;
  cout << value << endl;
  cout << ::value << endl; // スコープ解決演算子で明示的にグローバルスコープのvalueを指定
  cout << S().getValue() << endl;
  {
    const char* value = "In block scope";
    cout << value << endl;
  }
}

