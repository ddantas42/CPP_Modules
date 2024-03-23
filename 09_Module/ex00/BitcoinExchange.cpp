#include "BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {(void) copy;}
// Destructor
BitcoinExchange::~BitcoinExchange() {}
// Operators
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign){(void) assign;return *this;}

int BitcoinExchange::YMDValidator(std::string YMD[])
{
	float f[3];
	f[0] = std::strtof(YMD[0].c_str(), NULL);
	f[1] = std::strtof(YMD[1].c_str(), NULL);
	f[2] = std::strtof(YMD[2].c_str(), NULL);
	
	
	// if (f[0] <= 0)
	// {
	// 	std::cout << "Error: negative year" << std::endl;
	// 	return 1;
	// }
	// else if (f[1] <= 0 || f[1] > 12)
	// {
	// 	std::cout << "Error: invalid month" << std::endl;
	// 	return 1;
	// }
	// else if (f[2] <= 0 || f[2] > 31 || ((f[1] == 4 || f[1] == 6 || f[1] == 9 || f[1] == 11) && f[2] == 31) || (f[1] == 2 && f[2] > 29))
	// {
	// 	std::cout << "Error: invalid day" << std::endl;
	// 	return 1;
	// }
	// else if (f[0] % 4 == 0 && f)
	// {
		// Protect against anos bisseistos
	// }
	return 0;
}

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

int BitcoinExchange::DataValidator(std::string date)
{
	std::string YMD[3];

	std::istringstream ss(date);


	std::getline(ss, YMD[0], '-');
    std::getline(ss, YMD[1], '-');
    std::getline(ss, YMD[2]);

	std::cout << "year: " << YMD[0] << std::endl;
	std::cout << "month: " << YMD[1] << std::endl;
	std::cout << "day: " << YMD[3] << std::endl;

	YMD[0].size();
	YMD[1].size();
	std::cout <<  std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl<< YMD[2].size() << std::endl;
	if (YMD[1].size() != 2 || YMD[2].size() != 2)
	{
		std::cout << "Error: wrong date format" << std::endl;
		return 1;
	}

	if (YMDValidator(YMD))
		return 1;

	return 0;
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
	else if (DataValidator(date))
		return ;
	else
		this->data.insert(std::pair<std::string, float>(date, f));		
}


void BitcoinExchange::BtcExchange(std::string str)
{
	if(OpenFile(str))
	{
		if (this->file.is_open())
			this->file.close();
		return;
	}
	while (std::getline(file, str))
		ParseFile(str);
}