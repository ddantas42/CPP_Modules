/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:38:22 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/20 17:38:45 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
	(void) copy;
}


// Destructor
AMateria::~AMateria()
{
}


// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	(void) assign;
	return *this;
}

// Constructors
Ice::Ice()
{
}

Ice::Ice(const Ice &copy)
{
	(void) copy;
}


// Destructor
Ice::~Ice()
{
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	return *this;
}

// Constructors
Cure::Cure()
{
}

Cure::Cure(const Cure &copy)
{
	(void) copy;
}


// Destructor
Cure::~Cure()
{
}


// Operators
Cure & Cure::operator=(const Cure &assign)
{
	(void) assign;
	return *this;
}