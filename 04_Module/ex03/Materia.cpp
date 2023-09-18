/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:42:46 by hiper             #+#    #+#             */
/*   Updated: 2023/09/18 19:06:44 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* --- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- */
/* --- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- */
/* --- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- */

// Constructors
Ice::Ice()
{
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
}


// Destructor
Ice::~Ice()
{
	std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	return *this;
}

/* --- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- */
/* --- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- */
/* --- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- */

// Constructors
Cure::Cure()
{
	std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
}


// Destructor
Cure::~Cure()
{
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}


// Operators
Cure & Cure::operator=(const Cure &assign)
{
	(void) assign;
	return *this;
}
