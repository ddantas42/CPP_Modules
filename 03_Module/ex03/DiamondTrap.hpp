/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:38:51 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/13 15:15:42 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : virtual FragTrap, virtual ScavTrap
{
	private:
		std::string name;
		
	public:
		// Constructors
		DiamondTrap();
		DiamondTrap( std::string name );
		~DiamondTrap( void );
};

#endif