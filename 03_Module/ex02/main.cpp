/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:46:05 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/09 02:54:13 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Afonso("Afonso");
	FragTrap Fragger("Fragger");

	std::cout << std::endl;
	
	Afonso.attack("Fragger");
	Fragger.takeDamage(0);

	Fragger.attack("Fragger");
	Afonso.takeDamage(30);

	Fragger.highFiveGuys();
	
	std::cout << std::endl;
	
	return (0);
	
	
}

