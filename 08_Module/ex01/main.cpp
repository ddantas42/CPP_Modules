#include <iostream>
#include "Span.hpp"

int main()
{
	Span sp(100000);
	std::vector<int> nums;

	for (int i = -50000; i < 40000; i++)
		nums.push_back(i);
	try
	{
		std::cout << "Adding range" << std::endl;
		sp.AddRange(nums);
	}
	catch (std::string &e)
	{
		std::cout << e << std::endl;
	}
	try{

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::string &e)
	{
		std::cout << e << std::endl;
	}	

}

// int main()
// {
// 	Span sp = Span(5);

// 	try
// 	{
// 		sp.addNumber(-5);
// 		sp.addNumber(-3);
// 		sp.addNumber(17);
// 		sp.addNumber(-9);
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
