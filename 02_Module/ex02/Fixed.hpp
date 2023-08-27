/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:09:02 by hiper             #+#    #+#             */
/*   Updated: 2023/08/27 19:51:27 by ddantas-         ###   ########.fr       */
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
		int operator+( const Fixed &a );
		int operator-( const Fixed &a );
		int operator*( const Fixed &a );
		int operator/( const Fixed &a );

		/*		Incremente/decrement operators	*/
		/*
		Fixed operator++( void );	// pre
		Fixed operator++( int n );	// post
		
		Fixed operator--( void );	// pre
		Fixed operator--( int n );	// post
		
		/*			overload funtions			*/
		/*
		int &min( int &fp, int &fp2 );
		int &min( const int &fp, const int &fp2 );
		
		int &max( int &fp, int &fp2 );
		int &max( const int &fp, const int &fp2 );
		*/
};

	std::ostream &operator<<( std::ostream &out, Fixed const & i ); // insertion assignmente operator overload
	
#endif