/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:46:30 by hiper             #+#    #+#             */
/*   Updated: 2023/08/20 18:51:28 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>


class Zombie
{
    private:
        std::string name;
        
    public:
        Zombie( std::string str_name );
        ~Zombie( void );

        void announce( void );

};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif