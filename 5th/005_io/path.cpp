// Copyright (c) 2012-2024
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <filesystem>
#include <iostream>
#include <string>

using namespace std;
namespace fs = std::filesystem;

int main() {
  fs::path p1 = "/abc/def";   // 実行環境依存のマルチバイト文字列を渡して構築
  fs::path p2 = L"/abc/def";  // 実行環境依存のワイド文字列を渡して構築
  fs::path p3 = u"/abc/def";  // char16_t文字列を渡して構築
  fs::path p4 = U"/abc/def";  // char32_t文字列を渡して構築
  fs::path p5 = string("/abc/def"); // std::stringを渡して構築
  fs::path p6 = u8"/abc/def"; // UTF-8文字コードの文字列を渡して構築
  // C++17のC++プログラムとしてコンパイルする場合、
  // char配列の文字列がUTF-8として解釈されない環境では、
  // 以下のようにu8path()を使用する。
  // fs::path p6 = fs::u8path(u8"/abc/def");

  cout << "A : " << p6.generic_string() << endl; // 汎用形式のパス文字列をstringとして取得

  fs::path p7 = "/abc/def";
  p7 /= "ghi"; // パスを結合する。区切り文字は自動で追加される
  cout << "B : " << p7.string() << endl;

  fs::path p8 = p7 / "jkl" / "mno"; // 連続でパスを結合する
  cout << "C : " << p8.string() << endl;

  fs::path p9 = p8 / "/pqr/stu"; // 絶対パスと結合
  cout << "D : " << p9.string() << endl; // `/`演算子の右辺のパスが使用される

  fs::path p10 = "/abc/def";
  p10 += "ghi"; // 文字列を直接結合する。区切り文字は自動で追加されない
  cout << "E : " << p10.string() << endl;
}