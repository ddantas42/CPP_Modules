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
		void static int_to_char(long double dbl);
		void static int_to_int(long double dbl);
		void static int_to_float(long double dbl);
		void static int_to_double(long double dbl);

		int static is_int(std::string str);

		bool static limit_check(std::string str, long double dbl, char *pEnd);
		
};

#endif