/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:46:05 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/04 14:11:16 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Jonh("Jonh");
	
	Jonh.attack("Josh");
	Jonh.attack("Tosh");

	int n = 0;
	while (n < 11)
	{
		Jonh.takeDamage(9);
		Jonh.beRepaired(9);
		n++;
	}

	return (0);
}
