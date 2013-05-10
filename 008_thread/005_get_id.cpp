// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <cassert>
#include <iostream>
#include <sstream>
#include <thread>
#include <functional>

using namespace std;

void foo(stringstream& ss) {
  ss << "foo() : " << this_thread::get_id() << endl;
}

void bar(stringstream& ss) {
  ss << "bar() : " << this_thread::get_id() << endl;
}

int main() {
  stringstream ss_foo;
  stringstream ss_bar;
  thread th1(foo, ref(ss_foo));
  thread th2(bar, ref(ss_bar));

  // それぞれのスレッドのIDを取得する
  thread::id id1 = th1.get_id();
  thread::id id2 = th2.get_id();
  thread::id id3 = this_thread::get_id();

  assert(id1 != id2);
  assert(id1 != id3);
  assert(id2 != id3);

  th1.join();
  th2.join();

  cout << ss_foo.str();
  cout << ss_bar.str();
  cout << "main thread : " << this_thread::get_id() << endl;
}
