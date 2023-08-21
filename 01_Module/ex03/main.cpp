/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:36:21 by hiper             #+#    #+#             */
/*   Updated: 2023/08/21 19:34:09 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

/*
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
*/

int main()
{
    HumanB human_B("B");
    Weapon Balls("Balls");
    human_B.setWeapon(Balls);    
    
    Weapon baseball("baseball");
    HumanA human_A("A", baseball);
    
    human_A.attack();
    human_B.attack();
    
    Balls.setType("Balls v2");
    
    human_A.attack();
    human_B.attack();
    
    return (0);
}
/**/