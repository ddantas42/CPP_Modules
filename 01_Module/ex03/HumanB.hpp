/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:28:12 by hiper             #+#    #+#             */
/*   Updated: 2023/08/21 03:00:00 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon  *weapon;

    public:
        HumanB( std::string name );
        ~HumanB( void );
        
        void attack( void );
        void setWeapon( Weapon weapon );
};


#endif