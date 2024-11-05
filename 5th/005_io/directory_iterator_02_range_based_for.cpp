// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <filesystem>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

void print_directory_entry(const fs::directory_entry& entry) {
  if (entry.is_directory()) {
    cout << entry.path() << " is a directory" << endl;
  } else if (entry.is_regular_file()) {
    cout << entry.path() << " is a file" << endl;
  }
}

int main() {
  try {
    fs::directory_iterator it{"."};
    for (const fs::directory_entry& entry : it) {
      print_directory_entry(entry);
    }
  } catch (const fs::filesystem_error& e) { /* エラーハンドリング */ }
}