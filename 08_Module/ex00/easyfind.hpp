#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>

template <typename T>
void easyfind( T &container, int number )
{
	int n = 0;
	for (typename T::iterator i = container.begin(); i != container.end(); i++)
	{
		if (*i == number)
		{
			std::cout << "Found it!!\nPosition: " << n << std::endl;
			return ;
		}
		n++;
	}
	std::cout << "Not found :/" << std::endl;
}

#endif