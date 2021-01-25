module;

export module printer;

import <concepts>;
import <iostream>;


export template <typename T> void print_stuff(T element) {
  if constexpr (std::integral<T>) {
    std::cout << "You are printing an integral value: " << element << " \n";
  } else if (std::floating_point<T>) {
    std::cout << "You are printing a floating point value: " << element
              << " \n";
  } else {
    std::cout << "You are printing neither a float nor an integral value: " << element << " \n";
  }
}
