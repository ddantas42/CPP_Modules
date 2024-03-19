#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <limits>
# include <iomanip>

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
		
};

#endif