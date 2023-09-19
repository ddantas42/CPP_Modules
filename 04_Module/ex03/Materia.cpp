/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:42:46 by hiper             #+#    #+#             */
/*   Updated: 2023/09/19 14:53:35 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

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
	std::cout << "Default Constructor called of Ice" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of Ice" << std::endl;
}


// Destructor
Ice::~Ice()
{
	std::cout << "Destructor called of Ice" << std::endl;
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
	std::cout << "Default Constructor called of Cure" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of Cure" << std::endl;
}


// Destructor
Cure::~Cure()
{
	std::cout << "Destructor called of Cure" << std::endl;
}


// Operators
Cure & Cure::operator=(const Cure &assign)
{
	(void) assign;
	return *this;
}
