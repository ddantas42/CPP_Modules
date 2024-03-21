#include <iostream>
#include "Array.hpp"

int main( void )
{
	Array<int> a(5);

	std::cout << "Array size: " << a.size() << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	return 0;
}
