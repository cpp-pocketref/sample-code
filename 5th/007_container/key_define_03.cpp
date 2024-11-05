// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <string>

using namespace std;

struct Person {
  int age = 0;
  string name;

  Person() = default;
  Person(int age, const string& name)
    : age{age}, name{name} {}
};

// Person型のハッシュ値を計算する
namespace std {
  template <>
  struct hash<Person> {
    size_t operator()(const Person& p) const {
      size_t h1 = hash<int>{}(p.age);
      size_t h2 = hash<string>{}(p.name);
      return h1 ^ h2;
    }
  };
}

// Person型を等値比較する
bool operator==(const Person& a, const Person& b) {
  return tie(a.age, a.name) == tie(b.age, b.name);
}

int main() {
  // unordered_setのキーにPerson型を使用する
  unordered_set<Person> s;
  s.insert(Person{26, "Alice"});
  s.insert(Person{17, "Bob"});
  s.insert(Person{35, "Carol"});

  for (const Person& p : s) {
    cout << p.age << ", " << p.name << endl;
  }

  cout << endl;

  // unordered_mapのキーにPerson型を使用する
  unordered_map<Person, int> m;
  m.insert(make_pair(Person{26, "Alice"}, 1));
  m.insert(make_pair(Person{17, "Bob"}, 2));
  m.insert(make_pair(Person{35, "Carol"}, 3));

  for (pair<const Person&, const int&> p : m) {
    cout << p.first.age << ", " << p.first.name
         << ", " << p.second << endl;
  }
}