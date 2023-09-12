/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:52:17 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/12 17:43:13 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, public FragTrap
{
	private:
		std::string name;
		
	public:
		// Constructors
		DiamondTrap();
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &copy );
		
		// Destructor
		~DiamondTrap();
		
		// Operators
		DiamondTrap & operator=(const DiamondTrap &assign);
		
	private:
		
};

#endif