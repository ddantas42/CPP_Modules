#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template<typename T1>
T1 min(T1 a, T1 b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T2>
T2 max(T2 a, T2 b)
{
	if (a > b)
		return a;
	return b;
}

template<typename T3>
void swap(T3 &a, T3 &b)
{
	T3 tmp = a;
	a = b;
	b = tmp;
}


#endif