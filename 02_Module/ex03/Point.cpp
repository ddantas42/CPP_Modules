/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:27:18 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/11 21:57:02 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
	
}

Point::Point( const Fixed x, const Fixed y ) : x(x), y(y)
{

}

Point::Point( const Point &point ) : x(point.x), y(point.y)
{

}

Point::~Point()
{
	
}

Fixed Point::getX( void ) const
{
	return this->x;
}


Fixed Point::getY( void ) const
{
	return this->y;
}

int Point::operator==( const Point &P ) const
{
	int n = 0;
	if (this->getX().getRawBits() == P.getX().getRawBits())
		n++;
	if (this->getY().getRawBits() == P.getY().getRawBits())
		n++;
	if (n == 2)
		return (1);
	return (0);
}



void Point::operator=( const Point &P )
{
	(void)P;
}