/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:29:42 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/16 22:53:29 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
	protected:
		std::string name;
		int FS_hit_points;
		int FS_energy_points;
		int FS_attack_damage;
	
	public:
	
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap &copy );
		
		~FragTrap( void );
		FragTrap &operator=(const FragTrap &copy);

		void	highFiveGuys( void );
};

#endif