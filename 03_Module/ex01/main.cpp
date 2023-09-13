/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:46:05 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/12 15:23:18 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap Jonh;
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
	
	Jonh.attack("Carreiras");
	Carreiras.takeDamage(20);
	std::cout << std::endl;

	Jonh.guardGate(); std::cout << std::endl;
	
	return (0);
}

