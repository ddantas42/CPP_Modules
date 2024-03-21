#include <iostream>
#include "easyfind.hpp"


int main( void )
{
	std::vector<int> a;
	
	a.push_back(1);
	a.push_back(10);
	a.push_back(5);
	a.push_back(3);
	a.push_back(1);

	
	// Print vector
	std::cout << "Vector: ";
	for (std::vector<int>::iterator i = a.begin(); i != a.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;

	easyfind(a, 1);

	std::cout << std::endl;
	std::list<int> b;

	b.push_back(1);
	b.push_back(10);
	b.push_back(5);
	b.push_back(3);
	b.push_back(5);

	// Print list
	std::cout << "List: ";
	for (std::list<int>::iterator i = b.begin(); i != b.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;

	easyfind(b, 5);
	return 0;
}
