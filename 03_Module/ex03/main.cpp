/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:46:05 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/12 15:35:25 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Afonso("Afonso");
	FragTrap Fragger;
	std::cout << std::endl;
	
	Afonso.attack("Fragger");
	Fragger.takeDamage(0);
	std::cout << std::endl;

	Fragger.attack("Afonso");
	Afonso.takeDamage(30);
	std::cout << std::endl;

	Fragger.highFiveGuys();	std::cout << std::endl;
	
	return (0);
	
	
}

