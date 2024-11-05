// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

struct Person {
  int age = 0;
  string name;

  Person() = default;
  Person(int age, const string& name)
    : age{age}, name{name} {}
};

bool operator<(const Person& a, const Person& b) {
  return a.age < b.age; // 年齢で比較する
}

int main() {
  // setのキーにPerson型を使用する
  set<Person> s;
  s.insert(Person{26, "Alice"});
  s.insert(Person{17, "Bob"});
  s.insert(Person{35, "Carol"});

  for (const Person& p : s) {
    cout << p.age << ", " << p.name << endl;
  }

  cout << endl;

  // mapのキーにPerson型を使用する
  map<Person, int> m;
  m.insert(make_pair(Person{26, "Alice"}, 1));
  m.insert(make_pair(Person{17, "Bob"}, 2));
  m.insert(make_pair(Person{35, "Carol"}, 3));

  for (pair<const Person&, const int&> p : m) {
    cout << p.first.age << ", " << p.first.name
         << ", " << p.second << endl;
  }
}