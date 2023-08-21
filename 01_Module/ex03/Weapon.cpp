/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:28:24 by hiper             #+#    #+#             */
/*   Updated: 2023/08/21 19:21:18 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

const std::string &Weapon::getType( void )
{
    const std::string &type_2 = this->type;
    return (type_2);
}

void Weapon::setType( std::string type )
{
    std::string &typeREF = this->type;
    
    typeREF.clear();
    typeREF.assign( type );

}

Weapon::Weapon( std::string type ) : type(type)
{

}

Weapon::~Weapon( void )
{
    
}