// Copyright (c) 2012-2015
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <thread>
#include <mutex>
#include <string>
#include <memory> // unique_ptr
#include <utility> // move
#include <functional> // ref

using namespace std;

mutex printMutex_;
void print(const string& s) {
  lock_guard<mutex> lk(printMutex_);
  cout << s << endl;
}

void f1(int n) {
  print("f1 : " + to_string(n) + "が渡されました");
}
void f2(int &rn) {
  print("f2 : " + to_string(rn) + "が渡されました");
}
void f3(unique_ptr<int> pn) {
  print("f3 : " + to_string(*pn) + "が渡されました");
}

int main() {
  int x = 10, y = 20;
  unique_ptr<int> z(new int(30));
  thread th1(f1, x);
  thread th2(f2, ref(y));
  thread th3(f3, move(z));

  th1.join();
  th2.join();
  th3.join();
}
