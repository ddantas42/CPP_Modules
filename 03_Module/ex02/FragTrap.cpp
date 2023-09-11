/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:20:22 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/11 14:30:14 by ddantas-         ###   ########.fr       */
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

FragTrap::FragTrap( const FragTrap &copy ) : ClapTrap(copy.name)
{
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;

	std::cout << "FragTrap " << this->name << " Copy constructor called" << std::endl;

}

FragTrap &FragTrap::operator=( const FragTrap &copy )
{
	std::cout << "Copy assignmente operator called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;

	return (*this);
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

