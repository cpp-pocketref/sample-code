// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <cassert>
#include <iostream>
#include <sstream>
#include <thread>
#include <functional> // ref

using namespace std;

void foo(ostringstream& os) {
  os << "foo() : " << this_thread::get_id() << endl;
}

void bar(ostringstream& os) {
  os << "bar() : " << this_thread::get_id() << endl;
}

int main() {
  ostringstream os_foo;
  ostringstream os_bar;
  thread th1(foo, ref(os_foo));
  thread th2(bar, ref(os_bar));

  // それぞれのスレッドのIDを取得する
  thread::id id1 = th1.get_id();
  thread::id id2 = th2.get_id();
  thread::id id3 = this_thread::get_id();

  assert(id1 != id2);
  assert(id1 != id3);
  assert(id2 != id3);

  th1.join();
  th2.join();

  cout << os_foo.str();
  cout << os_bar.str();
  cout << "main thread : " << this_thread::get_id() << endl;
}
