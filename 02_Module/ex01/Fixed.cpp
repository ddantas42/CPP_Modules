/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:09:07 by hiper             #+#    #+#             */
/*   Updated: 2023/08/26 12:59:56 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_point(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n )
{
	this->fixed_point = n;
    // std::cout << "Const int constructor called" << std::endl;
}

// return static_cast<int>(std::round(floatValue * static_cast<float>(1 << fractionalBits)));
Fixed::Fixed( const float n )
{
    // std::cout << "Const float constructor called" << std::endl;
	this->fixed_point = roundf(n * static_cast<float>(1 << 8));
}

float   Fixed::toFloat( void ) const
{
    return (this->fixed_point >> this->fractional_bits);
}

int     Fixed::toInt( void ) const
{
	
	
	return (this->fixed_point / 1 << this->fractional_bits);
}

std::ostream &operator<<( std::ostream &out, Fixed const & i  )
{
	out << i.toFloat();
	return (out);
}






Fixed::Fixed( const Fixed &instance)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = instance.fixed_point;
}

void Fixed::operator=( const Fixed &F )
{
    // std::cout << "Copy assignmente operator called" << std::endl;
    this->fixed_point = F.fixed_point;
}

Fixed::~Fixed( void )
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void )
{
    // std::cout << "getRawBits member function called" << std::endl;

    return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    // std::cout << "setRawBits called" << std::endl;
    this->fixed_point = raw;
}