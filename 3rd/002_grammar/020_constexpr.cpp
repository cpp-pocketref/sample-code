// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>

#if __cplusplus < 201103L
#define constexpr const
#endif

struct S {
  int val;
  S() = default;
  S(const S&) = default;
  constexpr S(const int i) : val(i) {};
  constexpr S operator +(const S& r) { return S(val + r.val); }
  constexpr int getVal() { return val; }
};

constexpr int mul(int l, int r) { return l * r; }
template<typename T> constexpr T add(const T& l, const T& r) { return l + r; }
template<> constexpr int add<int>(const int&l, const int&r) { return l + r; }

const int val1 = mul(3, 4);
const int val2 = add(1, 2);
const double dval1 = add(1.2, 3.4 );
constexpr S ss = add(S(1), S(2));

constexpr int square(int x ) { return x * x; }

constexpr int sq = square(10);

constexpr int sigma(int val) { return val == 0 ? 0 : val + sigma(val - 1); }

template<int v> int ifunc(int val = v) {return val;}

const int s = sigma(10);
const int cv = 10;

inline int mul2(int l, int r) { return l * r; }

const int cia[] = { s, cv };

const int z = ifunc<5>(2);
constexpr int so = S().getVal();

//template<typename T> constexpr T max_value() { return (1 << (sizeof(T) * 8 - 1)) - 1; }
template<typename T> constexpr T max_value() { return (1 << (sizeof(T) * 8 - 2)) - 1; }

const int imax = max_value<int>();

const int v = ifunc<max_value<int>()>();

int main()
{
  using namespace std;
  cout << ss.val << endl;

  ifunc<mul(1, 2)>();
  ifunc<cv>();
  cout << static_cast<unsigned int>(-1) << endl;
  ifunc<static_cast<unsigned int>(-1)>();
  switch(mul(2, 3)) {
    case 1:
    break;
    case 2:
    break;
    case sigma(3):
    break;
    case s:
    break;
    default:
    break;
  }
  cout << imax << endl;
  cout << ((1 << (sizeof(int) * 8 - 1)) - 1) << endl;
}
