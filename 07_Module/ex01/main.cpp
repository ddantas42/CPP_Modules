#include <iostream>
#include "iter.hpp"

void atribute_int(int &i)
{
	i = 57;
}

void atribute_char(char &i)
{
	i = 'b';
}

void print_int_array(int *array)
{
	for (int i = 0; i < 10; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

void print_char_array(char *array)
{
	for (int i = 0; i < 10; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

int main( void )
{
	int a[10] = {1,1,1,1,1,1,1,1,1,1};

	std::cout << "Array A before iter" << std::endl;
	print_int_array(a);
	std::cout << "Array A after iter" << std::endl;
	::iter(a, 10, atribute_int);
	print_int_array(a);

	char b[10] = {'a','a','a','a','a','a','a','a','a','a'};

	std::cout << "Array B before iter" << std::endl;
	print_char_array(b);
	::iter(b, 10, atribute_char);
	std::cout << "Array B after iter" << std::endl;
	print_char_array(b);

	return 0;
}
