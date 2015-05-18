// Copyright (c) 2012-2013
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda, wraith.
// Released under the CC0 1.0 Universal license.
class Item {
  int id = 0;
public:
  int getId() const noexcept {
    return id;
  }
};

int getItemId(const Item& item)
              noexcept(noexcept(item.getId())) {
  return item.getId();
}

int main() {
  Item item;
  {
    int id = item.getId();
  }
  {
    int id = getItemId(item);
  }
}
