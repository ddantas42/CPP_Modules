/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:09:07 by hiper             #+#    #+#             */
/*   Updated: 2023/08/23 03:15:47 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &instance)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = instance.getRawBits();
}

void Fixed::operator=( const Fixed &F )
{
    std::cout << "Copy assignmente operator called" << std::endl;
    this->fixed_point = F.fixed_point;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void )
{
    std::cout << "getRawBits member function called" << std::endl;

    return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits called" << std::endl;
    this->fixed_point = raw;
}