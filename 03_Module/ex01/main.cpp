/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:46:05 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/11 14:11:50 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap Jonh("Jonh");
	ClapTrap Carreiras("Carreiras");
	std::cout << std::endl;
	
	Carreiras.beRepaired(20);
	Jonh.beRepaired(10);
	std::cout << std::endl;
	
	Carreiras.attack("Jonh");
	Jonh.takeDamage(0);
	std::cout << std::endl;
	
	Jonh.attack("Carreiras");
	Carreiras.takeDamage(20);
	std::cout << std::endl;
	
	return (0);
}

