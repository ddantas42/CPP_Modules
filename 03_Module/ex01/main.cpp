/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:46:05 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/04 16:26:53 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap Jonh("Jonh");
	ClapTrap Carreiras("Carreiras");

	Carreiras.beRepaired(20);
	Jonh.beRepaired(10);
	
	Carreiras.attack("Jonh");
	Jonh.takeDamage(0);
	
	Jonh.attack("Carreiras");
	Carreiras.takeDamage(20);

	

	
	return (0);
	
	
}

