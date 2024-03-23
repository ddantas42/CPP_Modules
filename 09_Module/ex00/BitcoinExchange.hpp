#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <cstring>
# include <cstdlib>
# include <unistd.h>

# include <sstream>

class BitcoinExchange
{
	public:
		// Constructors
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		// Destructor
		~BitcoinExchange();
		// Operators
		BitcoinExchange & operator=(const BitcoinExchange &assign);

		
		void BtcExchange(std::string file);
		
	private:
		std::map<std::string, float> data;
		std::map<std::string, float> input;
		std::fstream file;
		
		int YMDValidator(std::string YMD[]);
		int OpenFile(std::string file);
		void ParseFile(std::string line);
		int DataValidator(std::string date);
};

#endif