/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:13:59 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/12 17:08:19 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int main()
{
	const Point a(Fixed(0), Fixed(5));
	const Point b(Fixed(0), Fixed(0));
	const Point c(Fixed(5), Fixed(0));

	const Point point(Fixed(0), Fixed(0));

	std::cout << "bsp is " <<
	bsp(a, b, c, point)
	<< std::endl;
	
	return (0);
}