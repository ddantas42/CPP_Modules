#include "BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {(void) copy;}
// Destructor
BitcoinExchange::~BitcoinExchange() {}
// Operators
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign){(void) assign;return *this;}

int BitcoinExchange::OpenFile(std::string str)
{
	this->file.open(str.c_str(), std::ios::in);
	
	if (this->file.is_open())
	{
		std::string line;
		std::getline(this->file, line);
		if (std::strcmp(line.c_str(), "date | value") != 0)
		{
			std::cout << "Error: wrong file format" << std::endl;
			this->file.close();
			return 1;
		}
		else 
			return 0;
	}
	else
		std::cout << "Error: file not found" << std::endl;
	return 1;
}

int BitcoinExchange::DataValidator(std::string date, float value)
{
	int f[2] = {0, 0};

	try {

		std::string date1 = date.substr(0, date.find("-"));
		std::string date2 = date.substr(date.find("-") + 1);
		std::string date3 = date2.substr(0, date2.find("-"));
		
		std::cout << "BAAAHHHH\n";
		date1.size();
		std::cout << "BEEEEHHHH\n";
		date2.size();
		std::cout << "BIIIIHHHH\n";
		date3.size();
		
		if (date2.size() != 2 || date3.size() != 2)
		{
			std::cout << "Error: wrong date format" << std::endl;
			return 1;
		}
	}
	catch (...) {
		std::cout << "Error: wrong date format" << std::endl;
		return 1;
	}

	return 0;
	(void)f;
	(void)value;
}

void BitcoinExchange::ParseFile(std::string line)
{
	char *ptr = NULL;
	float f;

	std::string date = line.substr(0, line.find(" | "));
	std::string value = line.substr(line.find(" | ") + 3);
	std::cout << date << " " << value << std::endl;

	ptr = NULL;
	f = std::strtof(value.c_str(), &ptr);
	if (date.empty() || value.empty() || ptr[0] != '\0')
	{
		std::cout << "ptr: " << ptr << std::endl;
		std::cout << "Error: wrong file format" << std::endl;
	}
	else if (f < 0 || f > 1000)
	{
		if (f < 0)
			std::cout << "Error: number is negative" << std::endl;
		else
			std::cout << "Error: number is too big" << std::endl; 
	}
	else if (DataValidator(date, f))
		return ;
	else
		this->data.insert(std::pair<std::string, float>(date, f));		
}


void BitcoinExchange::BtcExchange(std::string str)
{
	if(OpenFile(str))
		return;
	while (std::getline(file, str))
		ParseFile(str);
}