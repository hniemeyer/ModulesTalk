module;
#include <iostream>

export module printer;

export {
	template <typename T>
	void print_stuff(T element) {
		std::cout << element << '\n';
	}
}