module;
#include <iostream>

module numbers;

int get_magic_number()
{
	return helper(5);
}

int helper(int x)
{
	return x + 42;
}

void print_magic_number()
{
	const auto res = get_magic_number();
	std::cout << res;
}