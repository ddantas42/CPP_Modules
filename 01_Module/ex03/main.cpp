/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:36:21 by hiper             #+#    #+#             */
/*   Updated: 2023/08/21 03:00:52 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


int main()
{
    /*{
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }*/
    
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    
    return 0;
}

/*int main()
{
    Weapon weaponA;
    Weapon weaponB;
    weaponA.set_type("baseball");
    weaponB.set_type("balls");
    
    HumanA human_A(weaponA);
    HumanB human_B;
    human_B.weapon = weaponB;
    
    human_A.name = "Human A";
    human_B.name = "Human B";
    human_A.attack();
    human_B.attack();
    
    
    return (0);
}*/