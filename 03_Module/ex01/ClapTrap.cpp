/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:44:24 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/11 14:18:43 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void ClapTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead..." << std::endl;
		return ;
	}
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy to attack!" << std::endl;
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
		std::cout << "ClapTrap " << this->name << " got hit while dead :/" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name;
	std::cout << " takes " << amount;
	std::cout << " of damage!";
	this->hit_points = this->hit_points - amount;
	if (this->hit_points <= 0)
	{
		std::cout << "And ClapTrap " << this->name << " DIES.... RIP" << std::endl;
		return ;
	}
	std::cout << "Now with " << this->hit_points
	<< " hit points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead..." << std::endl;
		return ;
	}
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy to heal!" << std::endl;
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
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;

	std::cout << "ClapTrap " << this->name << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy ) 
{
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &copy )
{
	std::cout << "Copy assignmente operator called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;

	return (*this);
}


ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << this->name << " Destructor called" << std::endl;
}