/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:29:42 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/02 13:14:33 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
	private:
		std::string name;
		
	public:
	
		FragTrap( std::string name );
		~FragTrap( void );
		void	highFiveGuys( void );
		void	attack(const std::string& target);
};

#endif