#include "RPN.hpp"

// Constructors
RPN::RPN() {}
RPN::RPN(const RPN &copy) {(void) copy;}
// Destructor
RPN::~RPN() {}
// Operators
RPN & RPN::operator=(const RPN &assign) {(void) assign;return *this;}

int RPN::is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

bool RPN::Check_str(std::string str)
{
	if (str.empty())
		return true;
	for (std::string::iterator i = str.begin(); i != str.end(); i++)
	{
		std::cout << "checking: " << *i << std::endl;
		
		if (*i != ' ' && *i != '+' && *i != '-' && *i != '*' && *i != '/' && !is_digit(*i))
			return true ;
		if (*i == ' ' && *(1+i) && *(1+i) == ' ')
			return true ;
		else if (*i != ' ' && *(1+i) && *(1+i) != ' ')
			return true ;
	}
	return false;
}

void RPN::Calculate(std::string str)
{
	if (Check_str(str))
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	

}