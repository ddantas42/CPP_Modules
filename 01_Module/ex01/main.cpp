/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:49:36 by hiper             #+#    #+#             */
/*   Updated: 2023/09/06 18:19:51 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

int main()
{
    Zombie *horde;
    int i = 2;
    
    horde = zombieHorde(i, "matt");  

    int n = 0;
    while (n < i)
    {
        horde[n].announce();
        n++;
    }

    delete (horde);
    return (0);
}