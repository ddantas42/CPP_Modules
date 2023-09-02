/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:a+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:29:42 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/02 11:23:00 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
	private:
		std::string name;
		
	public:
	
		ScavTrap( std::string name );
		~ScavTrap( void );
		void	guardGate( void );
		void	attack(const std::string& target);
};

#endif