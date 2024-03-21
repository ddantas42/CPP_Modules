#include "ScalarConverter.hpp"
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) {(void) copy;}
ScalarConverter::~ScalarConverter() {}
ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign) {(void) assign; return *this;}

int ScalarConverter::is_int(std::string str)
{
	int i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
		if (str[i] != '\0' && !(str[i] >= '0' && str[i] <= '9'))
		{
			std::cout << "not an int" << std::endl;
			return (0);
		}
	}
	if (str[i] == '\0')
		return (1);
	return (0);
}

bool ScalarConverter::limit_check(std::string str, long double dbl, char *pEnd)
{
	if (str == "nan" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (ERROR);
	}
	if ((pEnd[0] != '\0' && pEnd[1] != '\0') || ( dbl == 0 && !std::isdigit(str[0])))
	{
		std::cout << "invalid parameter" << std::endl;
		return (ERROR);
	}
	if (str == "-inff" || str == "+inff" || str == "inff" || str == "-inf" || str == "+inf" || str == "inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << dbl << "f" << std::endl;
		std::cout << "double: " << dbl << std::endl;
		return (ERROR);
	}
	if (dbl > INT32_MAX || dbl < INT32_MIN)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (dbl > std::numeric_limits<float>::max() || dbl < std::numeric_limits<float>::min())
			std::cout << "float: impossible" << std::endl;
		else
			std::cout << "float: " << dbl << "f" << std::endl;
		if (dbl > __DBL_MAX__ || dbl < __DBL_MIN__)
			std::cout << "double: impossible" << std::endl;
		else
			std::cout << "double: " << dbl << std::endl;
		return (ERROR);
	}

	return (ALL_GOOD);

	(void)str;
	(void)pEnd;
}

void ScalarConverter::convert(std::string str)
{
	char *pEnd = NULL;

	long double dbl = strtod(str.c_str(), &pEnd);
	std::cout << "Double: " << dbl << std::endl;
	std::cout << "pEnd: " << pEnd << std::endl << std::endl;

	if (ScalarConverter::limit_check(str, dbl, pEnd))
		return ;
	std::cout << "Passed Limit Check" << std::endl;

		ScalarConverter::int_to_char(dbl);
		ScalarConverter::int_to_int(dbl);
		ScalarConverter::int_to_float(dbl);
		ScalarConverter::int_to_double(dbl);
} 


void ScalarConverter::int_to_char(long double dbl)
{
	int display = static_cast<int>(dbl);
	std::string result = "impossible";

	if (display >= 32 && display <= 126)
		result = "'" + std::string(1, static_cast<char>(display)) + "'";
	else if ((display >= 0 && display <= 31) || (display >= 127 && display <= 255))
		result = "non displayable";

	std::cout
		<< "char: "
		<< result
		<< std::endl;
}

void ScalarConverter::int_to_int(long double dbl)
{
	std::cout
		<< "int: "
		<< static_cast<int>(dbl)
		<< std::endl;
}

void ScalarConverter::int_to_float(long double dbl)
{
	std::cout
		<< "float: "
		<< std::fixed
		<< std::setprecision(1)
		<< dbl
		<< 'f'
		<< std::endl;
}

void ScalarConverter::int_to_double(long double dbl)
{
	std::cout
		<< "double: "
		<< std::fixed // avoid cientific notation
		<< std::setprecision(1) // past dot precision 1
		<< dbl
		<< std::endl;
}