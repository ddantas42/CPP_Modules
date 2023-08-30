/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:44:24 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/30 03:18:01 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void ClapTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap is already dead..." << std::endl;
		return ;
	}
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap has no energy to attack!" << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->attack_damage;
	std::cout << " points of damage!!" << std::endl;

	this->energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap got hit while dead :/" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name;
	std::cout << " takes " << amount;
	std::cout << " of damage!";
	this->hit_points = this->hit_points - amount;
	if (this->hit_points <= 0)
	{
		std::cout << "And ClapTrap DIES.... RIP" << std::endl;
		return ;
	}
	std::cout << "Now with " << this->hit_points
	<< " hit points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap is already dead..." << std::endl;
		return ;
	}
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap has no energy to heal!" << std::endl;
		return ;
	}
	this->hit_points = hit_points + amount;
	
	std::cout << "ClapTrap " << this->name;
	std::cout << " heals " << amount;
	std::cout << "! Now having " << this->hit_points
	<< " Hit points!" << std::endl;

	this->energy_points--;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
}