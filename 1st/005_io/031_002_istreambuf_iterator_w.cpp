// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <sstream>
#include <iterator>
#include <vector>
#include <locale>

using namespace std;

template <class T>
void print(const wchar_t* name, const vector<T>& v) {
  std::wcout << name << L" : ";
  for (const T& x : v) {
    std::wcout << L"[" << x << L"]";
  }
  std::wcout << std::endl;
}

int main() {
  locale currentLoc("");
  wcin.imbue(currentLoc);
  wcout.imbue(currentLoc);

  wistringstream is1(L"a b c");
  is1.imbue(currentLoc);

  wistringstream is2(L"a b c");
  is2.imbue(currentLoc);

  vector<wchar_t> from_istreambuf_iterator{
                    istreambuf_iterator<wchar_t>(is1),
                    istreambuf_iterator<wchar_t>()
                  };
  vector<wchar_t> from_istream_iterator{
                    istream_iterator<wchar_t, wchar_t>(is2),
                    istream_iterator<wchar_t, wchar_t>()
                  };

  print(L"from_istreambuf_iterator", from_istreambuf_iterator);
  print(L"from_istream_iterator", from_istream_iterator);
}
