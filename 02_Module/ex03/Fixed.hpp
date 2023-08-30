/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:09:02 by hiper             #+#    #+#             */
/*   Updated: 2023/08/30 02:03:34 by ddantas-         ###   ########.fr       */
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

        int     getRawBits( void );
        void    setRawBits( int const raw );

        Fixed( const int n ); // constructor v2
        Fixed( const float n ); // constructor v3       
        
        float   toFloat ( void ) const;
        int     toInt( void ) const;
        
		
		/*			comparisons operators		*/
		int operator>( const Fixed &a );
		int operator<( const Fixed &a );

		int operator>=( const Fixed &a );
		int operator<=( const Fixed &a );

		int operator==( const Fixed &a );
		int operator!=( const Fixed &a );

		/*			arithmetic operators		*/
		Fixed operator+( const Fixed &a );
		Fixed operator-( const Fixed &a );
		Fixed operator*( const Fixed &a );
		Fixed operator/( const Fixed &a );

		/*		Incremente/decrement operators	*/
		Fixed operator++( void );		// pre
		Fixed operator++( int n );		// post
		
		Fixed operator--( void );		// pre
		Fixed operator--( int n );		// post
		
		/*			overload funtions			*/
		static Fixed &max( Fixed &fp, Fixed &fp2 );
		static const Fixed &max( const Fixed &fp, const Fixed &fp2 );
		
		static Fixed &min( Fixed &fp, Fixed &fp2 );
		static const Fixed &min( const Fixed &fp, const Fixed &fp2 );
		
};

	std::ostream &operator<<( std::ostream &out, Fixed const & i ); // insertion assignmente operator overload
	
#endif