// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  string c = x;
  c.replace(2, 1, "ABC", 2);
  cout << "c : " << c << endl;
                                                                               
  // 2文字から1文字を、'A'を3回繰り返した文字列で置き換える
  // replace(pos, n1, n2, c)
  string d = x;
  d.replace(2, 1, 3, 'A');
  cout << "d : " << d << endl;
                                                                               
  // 文字列の範囲ite1-ite2を、"ABC"で置き換える
  // replace(i1, i2, str)
  string e = x;
  string::iterator ite1 = e.begin() + 2;
  string::iterator ite2 = e.begin() + 3;
  e.replace(ite1, ite2, "ABC");
  cout << "e : " << e << endl;
                                                                               
  // 文字列の範囲itf1-itf2を、"ABC"の先頭2文字から成る部分文字列で置き換える
  // replace(i1, i2, s, n)
  string f = x;
  string::iterator itf1 = f.begin() + 2;
  string::iterator itf2 = f.begin() + 3;
  f.replace(itf1, itf2, "ABC", 2);
  cout << "f : " << f << endl;
                                                                               
  // 文字列の範囲itg1-itg2を、'A'を3回繰り返した文字列で置き換える
  // replace(i1, i2, n, c)
  string g = x;
  string::iterator itg1 = g.begin() + 2;
  string::iterator itg2 = g.begin() + 3;
  g.replace(itg1, itg2, 3, 'A');
  cout << "g : " << g << endl;
                                                                               
  // 文字列の範囲ith1-ith2を、文字列の範囲h1.begin-h1.endで置き換える
  // replace(i1, i2, j1, j2)
  string h = x;
  const string h1 = "ABC";
  string::iterator ith1 = h.begin() + 2;
  string::iterator ith2 = h.begin() + 3;
  h.replace(ith1, ith2, h1.begin(), h1.end());
  cout << "h : " << h << endl;
                                                                               
  // 文字列の範囲iti1-iti2を、文字の初期化子リストで置き換える
  // replace(i1, i2, init)
  string i = x;
  string::iterator iti1 = i.begin() + 2;
  string::iterator iti2 = i.begin() + 3;
  i.replace(iti1, iti2, {'A', 'B', 'C'});
  cout << "i : " << i << endl;
}
