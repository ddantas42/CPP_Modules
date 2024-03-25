#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <cstring>
# include <cstdlib>
# include <unistd.h>
# include <limits.h>
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
		std::string date;
		std::map<std::string, float> data;
		std::fstream file;
		std::fstream cvs;
		float value;
		
		std::string to_string(int value);
		int YMDValidator(std::string YMD[]);
		int OpenFile(std::string file);
		int ParseFile(std::string line);
		int DataValidator(long y, long m, long d);
		void GetDataCvs();
		float FindLowest();
};

#endif