module;

#include <fmt/core.h>

export module printer;

import <concepts>;
//import "fmt/core.h"; //works as well

export template <typename T> void print_stuff(T element) {
  if constexpr (std::integral<T>) {
    fmt::print( "You are printing an integral value: {}  \n", element);
  } else if (std::floating_point<T>) {
      fmt::print("You are printing an floating point value: {}  \n", element);
  } else {
      fmt::print("You are printing neither an integral or floating point value: {}  \n", element);
  }
}
