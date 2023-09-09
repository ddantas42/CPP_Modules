/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:15:42 by hiper             #+#    #+#             */
/*   Updated: 2023/09/06 18:16:39 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde;
    
    horde = (Zombie*)operator new(sizeof(Zombie) * N);

    
    for (int i = 0; i < N; i++)
    {
        new (&horde[i]) Zombie(name);
    }
    
    return horde;
}