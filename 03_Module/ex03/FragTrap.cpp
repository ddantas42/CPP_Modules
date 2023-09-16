/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:20:22 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/16 22:57:30 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{

	this->name.assign(name);
	this->hit_points = 100; this->FS_hit_points = 100;
	this->energy_points = 100; this->FS_energy_points = 100;
	this->attack_damage = 30; this->FS_attack_damage = 30;
	
	std::cout << "FragTrap " << this->name << " Constructor called" << std::endl;
}


FragTrap::FragTrap( ) : ClapTrap()
{

	this->name.assign("Default_FT");
	this->hit_points = 100; this->FS_hit_points = 100;
	this->energy_points = 100; this->FS_energy_points = 100;
	this->attack_damage = 30; this->FS_attack_damage = 30;
	
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &copy ) : ClapTrap(copy.name)
{
	this->name = copy.name;
	this->hit_points = copy.hit_points; this->FS_hit_points = copy.FS_hit_points;
	this->energy_points = copy.energy_points; this->FS_energy_points = copy.FS_energy_points;
	this->attack_damage = copy.attack_damage; this->FS_attack_damage = copy.FS_attack_damage;

	std::cout << "FragTrap " << this->name << " copy constructor called" << std::endl;

}

FragTrap &FragTrap::operator=( const FragTrap &copy )
{
	std::cout << "Copy assignmente operator called" << std::endl;
	this->name = copy.name; 
	this->hit_points = copy.hit_points; this->FS_hit_points = copy.FS_hit_points;
	this->energy_points = copy.energy_points; this->FS_energy_points = copy.FS_energy_points;
	this->attack_damage = copy.attack_damage; this->FS_attack_damage = copy.FS_attack_damage;

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

