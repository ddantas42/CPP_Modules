#include <iostream>
#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
		RPN::Calculate(av[1]);
	else
		std::cout << "Error: wrong arguments" << std::endl;
	return 0;
}