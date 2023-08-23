/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:09:02 by hiper             #+#    #+#             */
/*   Updated: 2023/08/23 12:51:35 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "iostream"

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

        int     getRawBits( void );
        void    setRawBits( int const raw );

        Fixed( const int n ); // constructor v2
        Fixed( const float n ); // constructor v3       
        
        float   toFloat ( void ) const;
        int     toInt( void ) const;
        
        void operator<<( const Fixed &F ); // insertion assignmente operator overload

};

#endif