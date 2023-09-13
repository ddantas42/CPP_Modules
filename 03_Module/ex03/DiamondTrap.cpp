/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:40:18 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/13 15:15:37 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
    this->name = name + "_DiamondTrap";
	this->attack_damage = FragTrap::attack_damage;
	
    std::cout << "DiamondTrap " << this->name << " Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " Destructor called" << std::endl;
}
