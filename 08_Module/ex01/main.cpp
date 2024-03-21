#include <iostream>
#include "Span.hpp"


int main()
{
	Span sp = Span(5);

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch (std::string &e)
	{
		std::cout << e << std::endl;
	}

	std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	
	return 0;
}
