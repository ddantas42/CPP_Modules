/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:27:18 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/30 02:29:40 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

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


void Point::operator=( Point &P )
{
	std::cout << "P.x.ToFloat = " << P.x.toFloat() << std::endl;
	std::cout << "P.x.ToFloat = " << this->x.toFloat() << std::endl;

}