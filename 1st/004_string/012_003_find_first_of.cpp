// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <string>
#include <iostream>

using namespace std;

int main() {
  string x = "abcabcdefdefabcabc";
  cout << "x:" << x << endl;
  cout << "x.find_first_of(\"DdEeFf\"):"
        << x.find_first_of("DdEeFf") << endl;
  cout << "x.find_first_of(\"AaBbCc\", 10):"
        << x.find_first_of("AaBbCc", 10) << endl;
  cout << "x.find_first_of(\"AaBbCc\", 14, 4):"
        << x.find_first_of("AaBbCc", 14, 4) << endl;
  cout << "x.find_first_of(\'f\', 3):"
        << x.find_first_of('f', 3) << endl;
  cout << "x.find_first_not_of(\"AaBbCc\"):"
        << x.find_first_not_of("AaBbCc") << endl;
  cout << "x.find_first_not_of(\"DdEeFf\", 10):"
        << x.find_first_not_of("DdEeFf", 10) << endl;
  cout << "x.find_first_not_of(\"DdEeFf\", 10, 4):"
        << x.find_first_not_of("DdEeFf", 10, 4) << endl;
  cout << "x.find_first_not_of(\'a\', 0):"
        << x.find_first_not_of('a', 0) << endl;
}
