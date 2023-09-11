/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:09:02 by hiper             #+#    #+#             */
/*   Updated: 2023/09/11 19:43:00 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

    private:
        int fixed_point;
        static const int fractional_bits = 8;
        
    public:
        Fixed(); // constructor
        Fixed(const Fixed &instance); // copy constructor
        void operator=( const Fixed &F ); // Copy assignmente operator overload
        ~Fixed(); // destructor

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        Fixed( const int n ); // constructor v2
        Fixed( const float n ); // constructor v3       
        
        float   toFloat ( void ) const;
        int     toInt( void ) const;
        

};

	std::ostream &operator<<( std::ostream &out, Fixed const & i ); // insertion assignmente operator overload
	
#endif