/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:00:20 by hiper             #+#    #+#             */
/*   Updated: 2023/08/20 18:46:46 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombie;

    zombie = new Zombie( name );
    return (zombie);
}