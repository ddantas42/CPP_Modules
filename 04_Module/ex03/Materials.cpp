/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materials.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:36:30 by hiper             #+#    #+#             */
/*   Updated: 2023/09/21 16:52:26 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materials.hpp"

// Constructors
Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	this->type = copy.getType();
}

// Destructor
Ice::~Ice() {}

// Operators
Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	return *this;
}

// Constructors
Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure &copy)  : AMateria(copy)
{
	this->type = copy.getType();
}

// Destructor
Cure::~Cure() {}

// Operators
Cure & Cure::operator=(const Cure &assign)
{
	(void) assign;
	return *this;
}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice();
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *clone = new Cure();
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
