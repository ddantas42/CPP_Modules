/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:52:13 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/12 17:53:37 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap() :  ClapTrap()
{
	this->name = "Default_DT";
	std::cout << "Default Constructor called of DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) :   ScavTrap( name ), FragTrap( name )
{
	this->name = name;
	std::cout << "Default Constructor called of DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of DiamondTrap" << std::endl;
}


// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called of DiamondTrap" << std::endl;
}


// Operators
DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
{
	(void) assign;
	return *this;
}

