/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:23:28 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/11 20:04:43 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"


class Point {
	
	private:
		const Fixed x;
		const Fixed y;
		
	public:
		Point();
		~Point();
		Point( const Fixed x, const Fixed y );
		Point( const Point &point );
		
		Fixed getX( void ) const ;
		Fixed getY( void ) const ;
        void operator=( const Point &P );
		
        int operator==( const Point &P ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif