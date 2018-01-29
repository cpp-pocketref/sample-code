// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <exception>
#include <iostream>
#include <thread>
#include <future>
#include <utility> // move

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
  catch (exception& e) {
    cout << "error : " << e.what() << endl;
  }
  th.join();
}
