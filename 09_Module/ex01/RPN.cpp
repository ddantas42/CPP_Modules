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

int RPN::is_operator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (1);
	return (0);
}

bool RPN::Check_str(std::string str)
{
	if (str.empty() || !is_digit(str[0]))
		return true;
	for (std::string::iterator i = str.begin(); i != str.end(); i++)
	{
		if (*i != ' ' && !is_operator(*i) && !is_digit(*i))
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
	std::stack<float> stack;
	if (Check_str(str))
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	for (std::string::iterator i = str.begin(); i != str.end(); i++)
	{

		if (is_digit(*i))
			stack.push(*i - '0');
		else if (is_operator(*i))
		{
			if (stack.size() < 2)
			{
				std::cout << "Error" << std::endl;
				return ;
			}
			
			float top = stack.top();
			stack.pop();
			float second = stack.top();
			stack.pop();

			if (*i == '+')
				stack.push(second + top);
			else if (*i == '-')
				stack.push(second - top);
			else if (*i == '*')
				stack.push(second * top);
			else if (*i == '/')
			{
				if (top != 0)
					stack.push(second / top);
				else
				{
					std::cout << "Error" << std::endl;
					return ;
				}
			}
		}
		
	}
	if (stack.size() == 1)
		std::cout << stack.top() << std::endl;
	else
		std::cout << "Error" << std::endl;
}