/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:31:22 by hiper             #+#    #+#             */
/*   Updated: 2023/08/21 02:43:46 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
    private:
        std::string type;
        
    public:
        Weapon( std::string type );
        ~Weapon( void );
    
        const std::string &getType( void );
        void setType( std::string type );
};


#endif