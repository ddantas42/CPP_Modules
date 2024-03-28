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

		
		static void BtcExchange(std::string file);
		
	private:

		static std::string to_string(int value);
		static int YMDValidator(std::string YMD[]);
		static int OpenFile(std::string file);
		static int ParseFile(std::string line, long *YMD, float &value, std::string &date);
		static int DataValidator(long y, long m, long d);
		static void GetDataCvs(std::map<std::string, float> &data);
		static float FindLowest(std::map<std::string, float> &data, long *YMD, std::string date);
};

#endif