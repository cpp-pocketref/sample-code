// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <thread>
#include <mutex>
#include <functional> // ref

using namespace std;

struct Data {
  mutex m;
  int data = 0;
  void doSomething() { data = data + 1; }
};

void bar(Data& d1, Data& d2) {
  int result = try_lock(d1.m, d2.m);

  if (result == -1) { // すべてロック成功
      scoped_lock locks(adopt_lock, d1.m, d2.m);
      d1.doSomething();
      d2.doSomething();

      // locks変数の初期化時に渡したミューテックスは
      // スコープの終わりですべてロックが解除される

  } else { // いずれかのミューテックスのロックに失敗
      // なにか別の処理を実行
  }
}

int main() {
  Data d1, d2;
  thread th1(bar, ref(d1), ref(d2));
  thread th2(bar, ref(d1), ref(d2));

  th1.join();
  th2.join();
}
