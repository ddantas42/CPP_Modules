/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:49:36 by hiper             #+#    #+#             */
/*   Updated: 2023/09/06 18:15:54 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *matt = newZombie("Matt");
    Zombie *Jonh = newZombie("Jonh");
    Zombie *ILoveBrains = newZombie("ILoveBrains");

    std::cout << std::endl;

    matt->announce();
    Jonh->announce();
    ILoveBrains->announce();
    
    std::cout << std::endl;

    
    randomChump("Randimi");
    std::cout << std::endl;
    randomChump("lilia");

    std::cout << std::endl;

    delete matt;
    delete Jonh;
    delete ILoveBrains;
    
    return (0);
}