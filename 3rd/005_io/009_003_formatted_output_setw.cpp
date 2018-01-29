// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cout << '|' << setw(7) << "Cat" << '|' << endl;
  cout << '|' << setw(7) << "Mouse" << '|' << endl;
  cout << '|' << setw(7) << "Elepant" << '|' << endl;
  cout << '|' << setw(7) << "Hippopotamus" << '|' << endl;
  cout << '|' << "Dog" << '|' << endl; // 注意：setw(7)の効果は持続しない
}
