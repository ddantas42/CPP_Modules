#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class RPN
{
	public:
		static void Calculate(std::string str);

	private:
		// Constructors
		RPN();
		RPN(const RPN &copy);
		// Destructor
		~RPN();
		// Operators
		RPN & operator=(const RPN &assign);


		static int is_digit(char c);
		static int is_operator(char c);
		static bool Check_str(std::string str);
};

#endif