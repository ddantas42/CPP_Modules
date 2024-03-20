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
	if ((pEnd[0] != '\0' && pEnd[0] != '\0') && (str != "nan"))
	{
		
	}

	if (dbl > INT32_MAX || dbl < INT32_MIN)
	{
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
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
	
	if (ScalarConverter::isInt(str))
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
	int display = std::atoi(str.c_str());
	std::string result = "Impossible";

	if (display >= 32 && display <= 126)
		result = static_cast<char>(display);
	else if ((display >= 0 && display <= 31) || (display >= 127 && display <= 255))
		result = "Non displayable";

	std::cout << "char: " << result << std::endl;
}

void ScalarConverter::toInt(std::string str)
{
	std::cout
		<< "int: "
		<< static_cast<int>(std::atoi(str.c_str()))
		<< std::endl;
}

void ScalarConverter::toFloat(std::string str)
{
	std::cout
		<< "float: "
		<< static_cast<float>(std::atoi(str.c_str()))
		<< std::endl;
}

void ScalarConverter::toDouble(std::string str)
{
	std::cout
		<< "double: "
		<< static_cast<double>(std::atoi(str.c_str()))
		<< std::endl;
}