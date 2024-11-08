// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <vector>

using namespace std;

class Point {
  int x, y;

public:
  Point(int x, int y)
    : x{x}, y{y} {}

  void show() const {
    cout << "(" << x << ", " << y << ")" << endl;
  }
};

int main() {
  vector<Point> points;

  points.emplace_back(1, 2);
  points.emplace_back(3, 4);

  for (const Point& p : points) {
    p.show();
  }
}