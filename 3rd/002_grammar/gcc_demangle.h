#ifndef GCC_DEMANGLE_H_
#define GCC_DEMANGLE_H_
#include <typeinfo>
#include <cxxabi.h>
#include <cstdlib>
#include <string>

inline namespace gcc_demangle {

std::string demangle(const std::type_info& info) {
  int status;
  char* p;
  std::string name(p = abi::__cxa_demangle(info.name(), 0, 0, &status));
  std::free(p);
  return name;
}

template<typename T> std::string demangle(const T&);
template<typename T> std::string demangle() {
  return demangle(typeid(T));
}

template<typename T> std::string demangle(const T&) {
  return demangle<T>();
}
}
#endif
