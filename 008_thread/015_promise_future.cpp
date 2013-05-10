// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <future>
#include <utility>

using namespace std;
int computeSomething() { return 3; }

void worker(promise<int> p) {
  try {
    //何か処理をして結果をpromiseに設定する
    p.set_value(computeSomething());
  } catch(...) {
    //例外が発生したら例外をpromiseに設定する
    p.set_exception(current_exception());
  }
}

int main() {
  promise<int> p;
  future<int> f = p.get_future();

  thread th(worker, move(p));

  try {
    cout << "value : " << f.get() << endl;
  }
  catch(exception &e) {
    cout << "error : " << e.what() << endl;
  }
  th.join();
}
