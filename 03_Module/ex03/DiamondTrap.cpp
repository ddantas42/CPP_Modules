/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:26:34 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/02 15:00:08 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ScavTrap(name), FragTrap(name)
{
	this->name = name;
}

DiamondTrap::~DiamondTrap( void )
{
	
}
