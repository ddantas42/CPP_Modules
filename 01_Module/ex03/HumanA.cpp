/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:28:16 by hiper             #+#    #+#             */
/*   Updated: 2023/08/21 17:42:54 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

void HumanA::attack( void )
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanA::HumanA( std::string name, Weapon weapon ) : name(name), weapon(&weapon)
{

}

HumanA::~HumanA( void )
{

}