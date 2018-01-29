// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <iterator>
#include <vector>

using namespace std;

template <class T>
void print(const char* name, const vector<T>& v) {
  std::cout << name << " : ";
  for (const T& x : v) {
    std::cout << "[" << x << "]";
  }
  std::cout << std::endl;
}

int main() {
  istringstream is1("a b c");
  istringstream is2("a b c");

  vector<char> from_istreambuf_iterator{
                 istreambuf_iterator<char>(is1),
                 istreambuf_iterator<char>()
               };
  vector<char> from_istream_iterator{
                 istream_iterator<char>(is2),
                 istream_iterator<char>()
               };

  print("from_istreambuf_iterator", from_istreambuf_iterator);
  print("from_istream_iterator", from_istream_iterator);
}
