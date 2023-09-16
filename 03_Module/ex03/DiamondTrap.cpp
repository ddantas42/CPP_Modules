/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:40:18 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/16 22:14:10 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("Default_DT_clap_name")
{
    
    this->name = "Default_DT";
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;

    
    std::cout << "DiamondTrap " << this->name << " Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    std::cout << std::endl;
    std::cout << "FragTrap::hit_points = " << this->FragTrap::hit_points << std::endl;
    std::cout << "FragTrap::energy_points = " << this->FragTrap::energy_points << std::endl;
    std::cout << "FragTrap::attack_damage = " << this->FragTrap::attack_damage << std::endl;
    std::cout << std::endl;
    std::cout << "ScavTrap::hit_points = " << this->ScavTrap::hit_points << std::endl;
    std::cout << "ScavTrap::energy_points = " << this->ScavTrap::energy_points << std::endl;
    std::cout << "ScavTrap::attack_damage = " << this->ScavTrap::attack_damage << std::endl;
    
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    this->attack_damage = FragTrap::attack_damage;
    this->energy_points = ScavTrap::energy_points;
    this->hit_points = FragTrap::hit_points;
    
    std::cout << "DiamondTrap " << this->name << " Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " Destructor called" << std::endl;
}

void DiamondTrap::showStats() const
{
    std::cout
        << "DiamondTrap " << name
        << " stats:" << std::endl
        << "Hit points = " << this->hit_points << std::endl
        << "Energy points = " << this->energy_points << std::endl
        << "Attack damage = " << this->attack_damage << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout
        << "DiamondTrap name = " << name << std::endl
        << "ClapTrap name = " << this->ClapTrap::name
        << std::endl;
}
