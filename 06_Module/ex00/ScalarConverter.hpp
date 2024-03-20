#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <stdint.h>
# include <limits>
# include <iomanip>

# define ERROR 1
# define ALL_GOOD 0

class ScalarConverter
{
	public:

		void static convert(std::string str);

	private:

		// Constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		// Destructor
		~ScalarConverter();
		// Operators
		ScalarConverter & operator=(const ScalarConverter &assign);
		
		// Converters
		void static toChar(std::string str);
		void static toInt(std::string str);
		void static toFloat(std::string str);
		void static toDouble(std::string str);

		int static isInt(std::string str);

		bool static limit_check(std::string str, long double dbl, char *pEnd);
		
};

#endif