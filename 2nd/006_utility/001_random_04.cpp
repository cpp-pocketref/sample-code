// Copyright (c) 2012-2014
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <random>

using namespace std;

int main()
{
  random_device seed_gen;
  mt19937 engine(seed_gen());

  // 確率テーブル
  vector<double> probabilities = {
    0.1, 0.2, 0.3, 0.2
  };

  discrete_distribution<size_t> dist(
    probabilities.begin(),
    probabilities.end()
  );

  for (int i = 0; i < 10; ++i) {
    size_t result = dist(engine);
    double resultProb = probabilities[result];
    cout << result << ':' << resultProb << endl;
  }
}
