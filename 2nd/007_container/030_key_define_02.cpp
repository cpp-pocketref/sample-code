// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
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
    : age(age), name(name) {}
};

struct AgeLess {
  bool operator()(const Person& a, const Person& b) const
    { return a.age < b.age; }
};

int main() {
  // setのキーにPerson型を使用する
  // キーの比較はAgeLessで行う
  set<Person, AgeLess> s;
  s.insert(Person(26, "Alice"));
  s.insert(Person(17, "Bob"));
  s.insert(Person(35, "Carol"));

  for (const Person& p : s) {
    cout << p.age << ", " << p.name << endl;
  }

  cout << endl;

  // mapのキーにPerson型を使用する
  // キーの比較はAgeLessで行う
  map<Person, int, AgeLess> m;
  m.insert(make_pair(Person(26, "Alice"), 1));
  m.insert(make_pair(Person(17, "Bob"), 2));
  m.insert(make_pair(Person(35, "Carol"), 3));

  for (std::pair<const Person&, const int&> p : m) {
    cout << p.first.age << ", " << p.first.name
         << ", " << p.second << endl;
  }
}
