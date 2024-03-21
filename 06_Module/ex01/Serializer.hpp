#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>

struct Data
{
	int i;
	char c;
	float f;
	double d;

	int i2;
	char c2;
	float f2;
	double d2;
};

class Serializer
{
	public:
		
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
		
	private:
		// Constructors
		Serializer();
		Serializer(const Serializer &copy);
		// Destructor
		~Serializer();
		// Operators
		Serializer & operator=(const Serializer &assign);
		
};

#endif