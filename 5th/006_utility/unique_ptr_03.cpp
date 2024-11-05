// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <cstdio>
#include <memory>

#include <iostream>

using namespace std;

void custom_fclose(FILE* p) {
  if (p != nullptr) {
    fclose(p);
    cout << "custom_fclose" << endl;
  }
}

void f() {
  unique_ptr<FILE, void(*)(FILE*)> fp{fopen("a.txt", "w+"), custom_fclose};

  // ファイルに書き込む(unique_ptr::get()で生ポインタを取得できる)
  string s = "hello";
  fwrite(s.data(), s.size(), 1, fp.get());
} // ここでcustom_fcloseが呼ばれる

int main() {
  f();
}