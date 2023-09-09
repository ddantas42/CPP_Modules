/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:28:18 by hiper             #+#    #+#             */
/*   Updated: 2023/09/06 15:40:47 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

void HumanB::attack( void )
{
    if (!(this->weapon->getType().size()))
        std::cout << this->name << " tried to attack, but didn't have a weapon!" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB( std::string name ) : name(name)
{
    this->weapon = NULL;
}

HumanB::~HumanB( void )
{
    
}

void HumanB::setWeapon( Weapon &weapon_arg )
{
    this->weapon = &weapon_arg;
}
