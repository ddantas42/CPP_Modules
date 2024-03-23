#include <iostream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	BitcoinExchange BTC;
	
	if (ac == 2)
		BTC.BtcExchange(av[1]);
	else
		std::cout << "Error: Wrong arguments" << std::endl;
	return 0;
}