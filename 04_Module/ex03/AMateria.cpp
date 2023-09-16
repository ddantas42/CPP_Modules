#include "AMateria.hpp"

// Constructors
AMateria::AMateria()
{
	std::cout << "Default Constructor called of AMateria" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of AMateria" << std::endl;
}


// Destructor
AMateria::~AMateria()
{
	std::cout << "Destructor called of AMateria" << std::endl;
}

// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	(void) assign;
	return *this;
}

