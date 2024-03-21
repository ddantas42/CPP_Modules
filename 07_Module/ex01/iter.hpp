#ifndef ITER_HPP
#define ITER_HPP

template <typename T1>
void iter(T1 *array, int length, void (*f)(T1 &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

#endif