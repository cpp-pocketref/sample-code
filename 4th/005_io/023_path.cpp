// Copyright (c) 2012-2017
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
  fs::path p6 = wstring(L"/abc/def"); // std::wstringを渡して構築
  fs::path p7 = u8"/abc/def"; // UTF-8文字コードの文字列を渡して構築
  // char配列の文字列がUTF-8として解釈されない環境では、
  // 以下のようにu8path()を使用する。
  // fs::path p7 = fs::u8path(u8"/abc/def");

  cout << "A : " << p7.u8string() << endl; // OSのパス形式に合わせたパス文字列をUTF-8文字列として取得
  wcout << "B : " << p7.generic_wstring() << endl; // 汎用形式のパス文字列をwstringとして取得

  fs::path p8 = "/abc/def";
  p8 /= "ghi"; // パスを結合する。区切り文字は自動で追加される
  cout << "C : " << p8.string() << endl;

  fs::path p9 = (p8 / "jkl" / "mno"); // 連続でパスを結合する
  cout << "D : " << p9.string() << endl;

  fs::path p10 = p9 / "/pqr/stu"; // 絶対パスと結合
  cout << "E : " << p10.string() << endl; // `/`演算子の右辺のパスが使用される

  fs::path p11 = "/abc/def";
  p11 += "ghi"; // 文字列を直接結合する。区切り文字は自動で追加されない
  cout << "F : " << p11.string() << endl;
}

