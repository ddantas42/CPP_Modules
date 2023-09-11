/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:40:18 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/11 15:13:58 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ScavTrap(name), FragTrap(name)
{
	this->name.assign(name);
	this->ClapTrap::name = name;
	this->hit_points = FragTrap::hit_points;
	// this->ScavTrap::ClapTrap::name = name + "_clap_name";
	
	// this->ClapTrap::name = name + "_clap_name";
	// this->hit_points = FragTrap::hit_points;
	std::cout << "DiamondTrap " << this->name << " Constructor called" << std::endl;

}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << this->name << " Destructor called" << std::endl;

}