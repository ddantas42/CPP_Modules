/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:20:22 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/02 11:25:08 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{

	this->name.assign(name);
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	
	std::cout << "ScavTrap " << this->name << " Constructor called" << std::endl;

}

void ScavTrap::attack(const std::string& target)

{
	if (this->hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is already dead..." << std::endl;
		return ;
	}
	if (this->energy_points <= 0)
	{
		std::cout << "ScavTrap " << this->name << " has no energy to attack!" << std::endl;
		return ;
	}
	
	std::cout << "ScavTrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->attack_damage;
	std::cout << " points of damage!!" << std::endl;

	this->energy_points--;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->name << " Destructor called" << std::endl;
}


void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode...scary..."
	<< std::endl;
}

