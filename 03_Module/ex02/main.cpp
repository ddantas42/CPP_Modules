/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:46:05 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/06 14:36:54 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Afonso("Afonso");
	FragTrap Fragger2("Fragger");

	FragTrap Fragger("heyy");

	std::cout << std::endl;
	
	Afonso.attack("Fragger");
	Fragger.takeDamage(0);

	Fragger.attack("Fragger");
	Afonso.takeDamage(30);

	Fragger.highFiveGuys();
	
	std::cout << std::endl;
	
	return (0);
	
	
}

