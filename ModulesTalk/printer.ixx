module;
#include <concepts>
#include <iostream>

export module printer;

export template <typename T> void print_stuff(T element) {
  if constexpr (std::integral<T>) {
    std::cout << "You are printing an integral value: " << element << " \n";
  } else if (std::floating_point<T>) {
    std::cout << "You are printing a floating point value: " << element
              << " \n";
  } else {
    std::cout << "You are printing: " << element << " \n";
  }
}
