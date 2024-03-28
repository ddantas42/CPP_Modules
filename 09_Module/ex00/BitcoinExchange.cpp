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

void BitcoinExchange::GetDataCvs(std::map<std::string, float> &data)
{
	std::string line;
	std::fstream cvs;

	cvs.open("data.csv", std::ios::in);
	std::getline(cvs, line);
	while (std::getline(cvs, line))
	{
		float value;
		std::stringstream ss(line);
		std::string date_cvs;
		std::getline(ss, date_cvs, ',');
		ss >> value;
		data.insert(std::pair<std::string, float>(date_cvs, value));
	}
	cvs.close();
}

int BitcoinExchange::OpenFile(std::string str)
{

	std::fstream file;
	file.open(str.c_str(), std::ios::in);
	
	if (file.is_open())
	{
		std::string line;
		std::getline(file, line);
		if (std::strcmp(line.c_str(), "date | value") != 0)
		{
			std::cout << "Error: wrong file format" << std::endl;
			file.close();
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

int BitcoinExchange::ParseFile(std::string line, long *YMD, float &value, std::string &date)
{
	if (line.empty())
	{
		std::cout << "Error: bad input (empty)" << std::endl;
		return 1;
	}
	YMD[0] = 0;
	YMD[1] = 0,
	YMD[2] = 0;
	char deli = 0;
	if (std::sscanf(line.c_str(), "%ld-%ld-%ld | %e%c", &YMD[0], &YMD[1], &YMD[2], &value, &deli) != 4)
	{
		std::cout << "Error: bad input => " << line << std::endl; return 1;
	}
	if (value <= 0 || value >= 1000)
	{
		if (value < 0)
			std::cout << "Error: number is negative" << std::endl;
		else if (value >= 1000)
			std::cout << "Error: number is too big" << std::endl; 
		else
			std::cout << "Error: value is 0 " << std::endl;
		return 1;
	}
	else if (DataValidator(YMD[0], YMD[1], YMD[2]))
		return 1;
	else
	{
		std::string month_str = to_string(YMD[1]);
		std::string day_str = to_string(YMD[2]);
		if (YMD[1] <= 9)
			month_str = "0" + month_str;
		if (YMD[2] <= 9)
			day_str = "0" + day_str;
			
		date = to_string(YMD[0]) + "-" + month_str + "-" + day_str;
		return 0;
	}
}

void BitcoinExchange::BtcExchange(std::string str)
{
	std::map<std::string, float> data;
	
	if(OpenFile(str))
		return;

	GetDataCvs(data);

	std::fstream file;
	std::string buffer;
	file.open(str.c_str(), std::ios::in);
	std::getline(file, str);
	

	while (std::getline(file, str))
	{
		long YMD[3];
		float value;
		std::string date;
		if (ParseFile(str, YMD, value, date))
			continue;
		std::cout << date << " => " << value << " = " << FindLowest(data, YMD, date) * value << std::endl;
	}
	file.close();
}

float BitcoinExchange::FindLowest(std::map<std::string, float> &data, long *YMD, std::string date)
{
	std::map<std::string, float>::iterator i = data.begin();
	long year;
	
	sscanf(i->first.c_str(), "%ld", &year);
	if (YMD[0] < year)
		return i->second;
	i = data.lower_bound(date);

	sscanf(i->first.c_str(), "%ld", &year);

	if (YMD[0] > year)
		return (FindLowest2(data, YMD, date));
	if (i != data.end() && i->first == date) {
			return i->second;
	}
	if (i != data.begin()) {
		--i;
		return i->second;
	}
	return i->second;
}

float BitcoinExchange::FindLowest2(std::map<std::string, float> &data, long *YMD, std::string date)
{
	std::map<std::string, float>::iterator i = data.begin();

	long year, month, day;
	sscanf(i->first.c_str(), "%ld-%ld-%ld", &year, &month, &day);
	while ((YMD[0] > year || YMD[1] > month || YMD[2] > day) && i != data.end())
	{
		sscanf(i->first.c_str(), "%ld-%ld-%ld", &year, &month, &day);
		i++;
	}
	if (i != data.end() && i->first == date) {
			return i->second;
	}
	if (i != data.begin()) {
		--i;
		return i->second;
	}
	else
	{
		i--;
		i--;
	}
	return i->second;
}