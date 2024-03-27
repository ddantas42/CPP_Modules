#include <iostream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
		BitcoinExchange::BtcExchange(av[1]);
	else
		std::cout << "Error: Wrong arguments" << std::endl;
	return 0;
}