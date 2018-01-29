// Copyright (c) 2012-2017
// Akira Takahashi, Toshihiko Ando, Kohsuke Yuasa,
// Yusuke Ichinohe, Masaya Kusuda.
// Released under the CC0 1.0 Universal license.
#include <iostream>
#include <string>
#include "gcc_demangle.h"

constexpr unsigned long long operator "" _pow(unsigned long long value) { return value * value; }
int operator "" _dummy(unsigned long long) { return 0; }

const std::string operator "" _dummy2(const char* instr) {
    std::string str;
    while(*instr != '\0') { str += *instr; ++instr; }
    return std::move(str);
}

const std::string operator "" _dummy3(const char* instr, std::size_t n) {
    std::string str;
    while(*instr != '\0') { str += (0xdf & *instr); ++instr; }
    return std::move(str);
}
const int value = 100_pow;
const std::string value1 = 123.45_dummy2;
const std::string value2 = "abc"_dummy3;

int main()
{
    std::cout << value << std::endl;
    std::cout << value1 << std::endl;
    std::cout << value2 << std::endl;

    char16_t    cc = '\"';
    std::cout << cc << '|' << '\t' << '|' << std::endl;
    std::cout << gcc_demangle::demangle(cc) << std::endl;

const char* string_literal = "abc\n\"def\"";
const char* raw_string_literal = R"delimiter(abc
"def")delimiter";
    std::cout << string_literal << std::endl;
    std::cout << raw_string_literal << std::endl;


const char* raw_string_literal2 = R"d(This string pattern is needing delimiter)")d";
const char* rsl = R"()\")";
    std::cout << rsl << std::endl;
    std::cout << "abcdef" << std::endl;
    std::cout << "abc" "def" << std::endl;
    std::cout <<  "ab\u4260" "cd" "ef" << std::endl;
    auto ccc = '\u0065';
    std::cout << demangle(ccc) << std::endl;
    std::cout << raw_string_literal2 << std::endl;
}
