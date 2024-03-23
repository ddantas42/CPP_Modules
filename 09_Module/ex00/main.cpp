#include <iostream>
#include <map>
#include <fstream>

int main(int ac, char **av)
{
	std::map<std::string, float> map;
	std::ifstream file;

	if (ac != 2)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return 1;
	}


	file.open(av[1]);

	if (file.is_open())
	{
		std::string line;
		while (std::getline(file, line))
		{
			std::cout << line << std::endl;
		}
	}
	else
	{
		std::cout << "Error: file not found" << std::endl;
	}
	return 0;
}