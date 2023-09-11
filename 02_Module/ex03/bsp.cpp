/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:13:11 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/11 23:06:52 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area ( Point const x, Point const y, Point const z )
{
	float area;
	
	float x1 = x.getX().toFloat();
	float y1 = x.getY().toFloat();
	
	float x2 = y.getX().toFloat();
	float y2 = y.getY().toFloat();

	float x3 = z.getX().toFloat();
	float y3 = z.getY().toFloat();

	float abs = (x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2));
	if (abs < 0)
		abs *= -1;

	area = abs / 2;

	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	// if (point == a || point == b || point == c)
		// return (false);
	
	float areaT = area(a, b, c);
	float area1 = area(a, b, point);
	float area2 = area(a, c, point);
	float area3 = area(b, c, point);

	if (area1 == 0 || area2 == 0 || area3 == 0)
		return (false);

	if (areaT == area1 + area2 + area3)
		return (true);
	return (false);
}