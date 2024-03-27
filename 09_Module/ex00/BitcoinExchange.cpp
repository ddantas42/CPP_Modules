#include "BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {(void) copy;}
// Destructor
BitcoinExchange::~BitcoinExchange() {}
// Operators
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign){(void) assign;return *this;}

std::string BitcoinExchange::to_string(int value) {
    std::ostringstream os;
    os << value;
    return os.str();
}

void BitcoinExchange::GetDataCvs()
{
	std::string line;

	this->cvs.open("data.csv", std::ios::in);
	std::getline(this->cvs, line);
	while (std::getline(this->cvs, line))
	{
		float value;
		std::stringstream ss(line);
		std::string date_cvs;
		std::getline(ss, date_cvs, ',');
		ss >> value;
		this->data.insert(std::pair<std::string, float>(date_cvs, value));
	}
	this->cvs.close();
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

int BitcoinExchange::DataValidator(long y, long m, long d)
{
	if (y <= 0 || y > INT_MAX)
	{
		std::cout << "Error: invalid year" << std::endl; return 1;
	}
	else if (m <= 0 || m > 12)
	{
		std::cout << "Error: invalid month" << std::endl; return 1;
	}
	else if (d <= 0 || d > 31 || ((m == 4 || m == 6 || m == 9 || m == 11) && d == 31) || (m == 2 && d > 29))
	{
		std::cout << "Error: invalid day" << std::endl; return 1;
	}
	else if (y % 4 != 0 && m == 2 && d == 29)
	{
		std::cout << "Error: invalid day" << std::endl; return 1;
	}
	return 0;
}

int BitcoinExchange::ParseFile(std::string line)
{
	if (line.empty())
	{
		std::cout << "Error: bad input (empty)" << std::endl;
		return 1;
	}
	this->year = 0;
	this->month = 0,
	this->day = 0;
	char deli = 0;
	if (std::sscanf(line.c_str(), "%ld-%ld-%ld | %e%c", &this->year, &this->month, &this->day, &this->value, &deli) != 4)
	{
		std::cout << "Error: bad input => " << line << std::endl; return 1;
	}
	if (this->value < 0 || this->value > 1000)
	{
		if (this->value < 0)
			std::cout << "Error: number is negative" << std::endl;
		else
			std::cout << "Error: number is too big" << std::endl; 
		return 1;
	}
	else if (DataValidator(year, month, day))
		return 1;
	else
	{
		std::string month_str = to_string(month);
		std::string day_str = to_string(day);
		if (month <= 9)
			month_str = "0" + month_str;
		if (day <= 9)
			day_str = "0" + day_str;
			
		this->date = to_string(year) + "-" + month_str + "-" + day_str;
		return 0;
	}
}

void BitcoinExchange::BtcExchange(std::string str)
{
	if(OpenFile(str))
	{
		if (this->file.is_open())
			this->file.close();
		return;
	}

	GetDataCvs();

	std::string buffer;
	this->file.close();
	this->file.open(str.c_str(), std::ios::in);
	std::getline(this->file, str);
	
	while (std::getline(this->file, str))
	{
		if (ParseFile(str))
			continue;
		// std::cout << "Good date: " << this->date << std::endl;
		std::cout << date << " => " << this->value << " = " << FindLowest() * this->value << std::endl;
	}
	this->file.close();
}

float BitcoinExchange::FindLowest()
{
	std::map<std::string, float>::iterator i = data.begin();

	int year, month, day;
	std::sscanf(i->first.c_str(), "%d-%d-%d", &year, &month, &day);
	while ((year < this->year || month < this->month || day < this->day) && i != data.end())
	{
		std::sscanf(i->first.c_str(), "%d-%d-%d", &year, &month, &day);
		i++;
	}
	if (i == data.begin())
		return i->second;
	else if (year == this->year && month == this->month && day == this->day)
		i--;
	else
	{
		i--;
		i--;
	}
	return i->second;
}