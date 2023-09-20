/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materials.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:36:30 by hiper             #+#    #+#             */
/*   Updated: 2023/09/20 23:52:09 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materials.hpp"

// Constructors
Ice::Ice() {}

Ice::Ice(const Ice &copy) : AMateria(copy) {(void) copy;}

// Destructor
Ice::~Ice() {}

// Operators
Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	return *this;
}

// Constructors
Cure::Cure() {}

Cure::Cure(const Cure &copy)  : AMateria(copy) {(void) copy;}

// Destructor
Cure::~Cure() {}

// Operators
Cure & Cure::operator=(const Cure &assign)
{
	(void) assign;
	return *this;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
