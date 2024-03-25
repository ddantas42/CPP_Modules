#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>

template <typename T>
void easyfind( T &container, int number )
{
	typename T::iterator i = std::find(container.begin(), container.end(), number);
	
	if (i == container.end())
		throw std::string("Number not Found");
	else
		std::cout << "Number found at position: " << std::distance(container.begin(), i) << std::endl;
}

#endif