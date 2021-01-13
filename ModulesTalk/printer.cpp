module;
#include <iostream>

module numbers;

void print_magic_number()
{
	const auto res = get_magic_number();
	std::cout << res;
}