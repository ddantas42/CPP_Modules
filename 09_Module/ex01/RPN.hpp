#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class RPN
{
	public:
		// Constructors
		RPN();
		RPN(const RPN &copy);
		
		// Destructor
		~RPN();
		
		// Operators
		RPN & operator=(const RPN &assign);

		int is_digit(char c);
		int is_operator(char c);
		bool Check_str(std::string &str);

		void Calculate(std::string str);

	private:
		std::stack<float> stack;
};

#endif