#include "ScalarConverter.hpp"
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) {(void) copy;}
ScalarConverter::~ScalarConverter() {}
ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign) {(void) assign; return *this;}

int ScalarConverter::isInt(std::string str)
{
	int i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
		if (str[i] != '\0' && !(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}
	if (str[i] == '\0')
		return (1);
	return (0);
}

void ScalarConverter::convert(std::string str)
{
	char *pEnd = NULL;
	long double dbl = strtod(str.c_str(), &pEnd);
	
	std::cout << "Double: " << dbl << std::endl;
	std::cout << "pEnd: " << pEnd << std::endl;

	if (pEnd && ScalarConverter::isInt(str))
	{
		std::cout << "here" << std::endl;
		ScalarConverter::toChar(str);
		ScalarConverter::toInt(str);
		ScalarConverter::toFloat(str);
		ScalarConverter::toDouble(str);
	}
}


void ScalarConverter::toChar(std::string str)
{
	std::cout
		<< "char: "
		<< str
		<< std::endl;
}

void ScalarConverter::toInt(std::string str)
{
	std::cout
		<< "int: "
		<< str
		<< std::endl;
}

void ScalarConverter::toFloat(std::string str)
{
	std::cout
		<< "float: "
		<< str
		<< std::endl;
}

void ScalarConverter::toDouble(std::string str)
{
	std::cout
		<< "double: "
		<< str
		<< std::endl;
}