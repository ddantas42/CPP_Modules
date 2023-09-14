/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:09:02 by hiper             #+#    #+#             */
/*   Updated: 2023/09/14 14:57:59 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

    private:
        int fixed_point;
        static const int fractional_bits = 8;
        
    public:
        Fixed(); // constructor
        Fixed(Fixed &instance); // copy constructor
        void operator=( const Fixed &F ); // Copy assignmente operator overload
        ~Fixed(); // destructor

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        
};

#endif