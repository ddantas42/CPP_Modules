/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:36:21 by hiper             #+#    #+#             */
/*   Updated: 2023/08/21 19:20:42 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}
/**/
/*
int main()
{
    Weapon club("club");
    HumanB human_B("B");

    club.getType();
    human_B.setWeapon(club);    
    human_B.attack();
    // Weapon weaponB("balls");
    
    // HumanB human_B("B");


    // human_B.setWeapon(weaponB);    
    // human_B.attack();
    
    
    // human_B.setWeapon(weaponA);
    // human_B.attack();
    // weaponA.setType("Bola de base");

    
    
    return (0);
}
/**/