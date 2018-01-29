// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
using namespace std;

// 多態の例
namespace Polymorphism {
struct DateType {
  int day_ = 1;
  int month_ = 10;
  int year_ = 2012;
  ~DateType() {}
  virtual void show() {
    cout << month_ << "/" << day_ << "/" << year_ << endl;
  }
};

struct USDate : DateType {
  void show() override {
    cout << day_ << "/" << month_ << "/" << year_ << endl;
  }
};

struct JPDate : DateType {
  void show() override {
    cout << year_ << "/" << month_ << "/" << day_ << endl;
  }
};

DateType  Date;
USDate    UsDate;
JPDate    JpDate;

void example()
{
  DateType* dates[] = { &Date, &UsDate, &JpDate };
  for(auto date : dates) date->show();
}
}

// 多重継承の例
namespace NonVirtual {
struct Base {
  int value_ = 0;
  virtual void method() const { cout << "Base::method()" << endl; }
  int getValue() const { return value_; }
  void setValue(int value) { value_ = value; }
};

struct Derived1 : Base {
  void method() const override { cout << "Derived1::method()" << endl; }
};

struct Derived2 : Base {
  void method() const override { cout << "Derived2::method()" << endl; }
};

struct Derived3 : Derived1, Derived2 {
};

void example()
{
  Derived3 d3;
  Base& base = dynamic_cast<Derived2&>(d3);
  d3.Derived1::setValue(1); // Baseのvalue_を1にしたつもり
  cout << d3.Derived2::getValue() << endl; // 0が出力される
  base.method();
}
}

namespace Virtual {
struct Base {
  int value_ = 0;
  virtual void method() const { cout << "Base::method()" << endl; }
  int getValue() const { return value_; }
  void setValue(int value) { value_ = value; }
};

struct Derived1 : virtual Base {
  void method() const override { cout << "Derived1::method()" << endl; }
};

struct Derived2 : virtual Base {
  void method() const override { cout << "Derived2::method()" << endl; }
};

struct Derived3 : Derived1, Derived2 {
  void method() const final override { cout << "Derived3::method()" << endl; }
};

void example()
{
  Derived3 d3;
  d3.Derived1::setValue(1); // Baseのvalue_を1に設定
  cout << d3.Derived2::getValue() << endl; // 1が出力される
}
}

// ネストしたクラス
namespace NestedClass {
struct Outer {
  typedef int Int;
  static int value0;
  Int value1 = 1;
  Int getValue() { return value1; }
  struct Inner {
    Int value2 = 2;
    Int getValue() { return value2; }
    Int getOuterValue0() { return value0; } // 静的メンバは参照可能
//  int getOuterValue1() { return value1; } // エラー
  };
};

int Outer::value0 = 0;

}

// friend宣言
namespace Friend {
class A;
struct C {
  int getValue1(const A& a);
  int getValue2(const A& a);
};
class A {
  int value = 1;
  friend struct B;
  friend int C::getValue1(const A&);
  friend int getAValue(const A&);
};

struct B {
  int getValue(const A& a) const { return a.value; }
};

int C::getValue1(const A& a) { return a.value; }
// int C::getValue2(const A& a) { return a.value; } // エラー


int getAValue(const A& a)
{
  return a.value;
}


void example()
{
  A a;
  B b;
  cout << b.getValue(a) << endl;
  cout << getAValue(a) << endl;
}

}

namespace CVSpecifier {
struct S {
  mutable int value = 0;
  void func() { cout << "non cv" << endl; }
  void func() volatile { cout << "volatile" << endl; }
  void func() const{ cout << "const" << endl; }
  void increment() const { ++value; }
};

struct SC {
  void func() { cout << "non cv" << endl; }
};

void example()
{
  S s;
  s.func();
  static_cast<const S&>(s).func();
  static_cast<volatile S&>(s).func();

  const S sc;
  sc.increment();
}

}

struct Base {
  virtual void Derived() {}
};

struct Derived : Base {
  Derived() {}
};

int main()
{
  Polymorphism::example();
  NonVirtual::example();
  Virtual::example();
  Friend::example();
  CVSpecifier::example();
}
