/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:20:22 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/02 13:18:42 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{

	this->name.assign(name);
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	
	std::cout << "FragTrap " << this->name << " Constructor called" << std::endl;

}

void FragTrap::attack(const std::string& target)

{
	if (this->hit_points <= 0)
	{
		std::cout << "FragTrap " << this->name << " is already dead..." << std::endl;
		return ;
	}
	if (this->energy_points <= 0)
	{
		std::cout << "FragTrap " << this->name << " has no energy to attack!" << std::endl;
		return ;
	}
	
	std::cout << "FragTrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->attack_damage;
	std::cout << " points of damage!!" << std::endl;

	this->energy_points--;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->name << " Destructor called" << std::endl;
}


void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->name << " gives high five to everyone!!"
	<< std::endl;
}

