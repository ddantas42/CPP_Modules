/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:46:30 by hiper             #+#    #+#             */
/*   Updated: 2023/08/20 21:13:23 by hiper            ###   ########.fr       */
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

Zombie* zombieHorde( int N, std::string name );

#endif