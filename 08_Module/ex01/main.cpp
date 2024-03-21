#include <iostream>
#include "Span.hpp"


int main()
{
	Span sp(100000);
	std::vector<int> v(100000);

	std::cout << "Adding 100000 numbers" << std::endl;
	for (int i = 0; i < 100000; i++)
		v[i] = i;
		
	std::cout << "Adding range" << std::endl;
	sp.AddRange(v);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

}

// int main()
// {
// 	Span sp = Span(5);

// 	try
// 	{
// 		sp.addNumber(5);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(9);
// 		sp.addNumber(11);
// 	}
// 	catch (std::string &e)
// 	{
// 		std::cout << e << std::endl;
// 	}

// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }
