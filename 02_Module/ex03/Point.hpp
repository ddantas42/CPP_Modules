/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:23:28 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/29 14:50:11 by ddantas-         ###   ########.fr       */
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
		Point( const Fixed x, const Fixed y );
		Point(const Point &point);
};

#endif