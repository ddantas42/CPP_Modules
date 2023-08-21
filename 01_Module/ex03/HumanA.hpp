/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:28:17 by hiper             #+#    #+#             */
/*   Updated: 2023/08/21 16:20:22 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
    private:
        Weapon      *weapon;
        std::string name;

    public:
        HumanA( std::string name, Weapon weapon );
        ~HumanA( void );
        
        void attack( void );
};


#endif