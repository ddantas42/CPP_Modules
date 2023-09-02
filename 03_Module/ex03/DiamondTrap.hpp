/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:29:42 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/02 14:59:45 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
		
	public:
	
		DiamondTrap( std::string name );
		~DiamondTrap( void );
		void	whoAmI( void );
};

#endif