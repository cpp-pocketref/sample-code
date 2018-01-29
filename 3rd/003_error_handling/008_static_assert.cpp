// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
template <int Size>
struct Pool {
  static_assert(Size > 0, "プールサイズは0より大きくなければならない");
  char buffer[Size];
};

int main() {
  Pool<10> pool; // 1. OK
//Pool<0> pool;  // 2. コンパイルエラー！
//Pool<-1> pool; // 3. コンパイルエラー！
}
