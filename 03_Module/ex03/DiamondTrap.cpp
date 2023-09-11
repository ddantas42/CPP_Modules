/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:40:18 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/11 14:53:26 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ScavTrap(name), FragTrap(name)
{
	this->name.assign(name);
	
	
	std::cout << "DiamondTrap " << this->name << " Constructor called" << std::endl;

}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << this->name << " Destructor called" << std::endl;

}