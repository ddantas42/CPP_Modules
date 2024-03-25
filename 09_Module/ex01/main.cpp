#include <iostream>
#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN rpn;
	if (ac == 2)
		rpn.Calculate(av[1]);
	else
		std::cout << "Usage: ./rpn \"expression\"" << std::endl;
	return 0;
}