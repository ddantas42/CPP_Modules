#include <iostream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	BitcoinExchange BTC;
	
	if (ac == 2)
		BTC.BtcExchange(av[1]);
	else
		std::cout << "Error: Wrong arguments" << std::endl;

		// use lower.bound, returns target or the next higher above it 
		// ONLY WORKS IF SORTED
	return 0;
}