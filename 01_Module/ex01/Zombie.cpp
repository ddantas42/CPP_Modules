/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:55:07 by hiper             #+#    #+#             */
/*   Updated: 2023/08/20 18:57:00 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string str_name ) : name(str_name)
{
    std::cout << "Zombie " << name << " ready to eat brainzzzz" << std::endl;
}

Zombie::~Zombie( void )
{
    std::cout << "Zombie " << this->name << " gave his last breath" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}