/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:36:03 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/12 15:51:20 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap 
{
	private:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
		
	public:
		ClapTrap( void );
		ClapTrap(std::string name);
		ClapTrap( const ClapTrap &copy );
		
		~ClapTrap( void );
		ClapTrap &operator=(const ClapTrap &copy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif