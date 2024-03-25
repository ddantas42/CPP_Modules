#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>

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
		bool Check_str(std::string str);
		
		void Calculate(std::string str);

	private:
		
};

#endif