#include <iostream>
#include "Span.hpp"

// int main()
// {
// 	Span sp(100000);
// 	std::vector<int> nums;

// 	sp.addNumber(-9999999);
// 	for (int i = -50000; i < 50000; i = i + 3)
// 		nums.push_back(i);
// 	try
// 	{
// 		std::cout << "Adding range" << std::endl;
// 		sp.AddRange(nums.begin(), nums.end());
// 	}
// 	catch (std::string &e)
// 	{
// 		std::cout << e << std::endl;
// 	}
// 	try{

// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch (std::string &e)
// 	{
// 		std::cout << e << std::endl;
// 	}	
// }

int main()
{
	Span sp = Span(5);

	try
	{
		sp.addNumber(-5);
		sp.addNumber(-3);
		sp.addNumber(17);
		sp.addNumber(-9);
		sp.addNumber(11);
	}
	catch (std::string &e)
	{
		std::cout << e << std::endl;
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
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
