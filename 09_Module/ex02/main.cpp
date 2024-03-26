#include <iostream>
#include "PmergeMe.hpp"
int main(int ac, char **av)
{
	if (ac > 1)
		PmergeMe::sort(ac, av);
	return 0;
}