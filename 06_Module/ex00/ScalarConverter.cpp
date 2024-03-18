#include "ScalarConverter.hpp"
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) {(void) copy;}
ScalarConverter::~ScalarConverter() {}
ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign) {(void) assign; return *this;}

void ScalarConverter::convert(std::string str)
{
	char *pEnd = NULL;
	long double dbl = strtod(str.c_str(), &pEnd);
	
	std::cout << "Double: " << dbl << std::endl;
	std::cout << "pEnd: " << pEnd << std::endl;
	
	
}


/*
void ScalarConverter::toChar(std::string str)
{
	std::string result = "impossible";

	std::cout
		<< "Char: "
		<< result
		<< std::endl;
	(void)str;
}

void ScalarConverter::toInt(std::string str)
{
	std::cout << "Int: " << std::endl;
	(void)str;
	
}

void ScalarConverter::toFloat(std::string str)
{
	std::cout << "Float: " << std::endl;
	(void)str;

}

void ScalarConverter::toDouble(std::string str)
{
	std::cout << "Double: " << std::endl;
	(void)str;

}
*/