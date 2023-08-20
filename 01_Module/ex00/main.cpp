/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:49:36 by hiper             #+#    #+#             */
/*   Updated: 2023/08/20 20:48:57 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *matt = newZombie("Matt");
    Zombie *Jonh = newZombie("Jonh");
    Zombie *ILoveBrains = newZombie("ILoveBrains");

    matt->announce();
    Jonh->announce();
    ILoveBrains->announce();
    
    randomChump("Randimi");
    randomChump("lilia");

    delete matt;
    delete Jonh;
    delete ILoveBrains;
    
    return (0);
}