/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:36:03 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/04 14:53:07 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap 
{
	protected:
		std::string name;
		int hit_points = 10;
		int energy_points = 10;
		int attack_damage = 0;
		
	public:	
		ClapTrap(std::string name);
		ClapTrap( const ClapTrap &copy );
		
		~ClapTrap( void );
		ClapTrap &operator=(const ClapTrap &copy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif