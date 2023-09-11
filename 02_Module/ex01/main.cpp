/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ddantas- <ddantas-@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/08/23 02:09:06 by hiper			 #+#	#+#			 */
/*   Updated: 2023/08/26 20:15:31 by ddantas-		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
		
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
		
return 0;
}



/*
#include <bitset>
#include <string>
#include <cstring>

std::string intToBinaryString(int num) {
	// Use std::bitset to convert the integer to binary
	return (std::bitset<sizeof(int) * 8>(num).to_string());
}

std::string floatToBinaryString(float num) {
	// Interpret the float as an integer
	int intEquivalent = 0;
	std::memcpy(&intEquivalent, &num, sizeof(float));

	// Use std::bitset to convert the integer to binary
	return std::bitset<sizeof(float) * 8>(intEquivalent).to_string();
}


int main()
{
	float a = 10.1f;
	int fixed_point = roundf(a * (1 << 8));
	
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << floatToBinaryString(a) << std::endl;
	
	std::cout << "fixed_point = " << fixed_point << std::endl;
	std::cout << "fixed_point = " << intToBinaryString(fixed_point) << std::endl;
	
	std::cout << "fixed_point / 256 = " << fixed_point / 256 << std::endl;
	std::cout << "fixed_point / 256 = " << intToBinaryString(fixed_point / 256) << std::endl;

	float f = static_cast<float>(fixed_point) / static_cast<float>(1 << 8);
	std::cout << "fp to float = " << f << std::endl;
	std::cout << "fp to float = " << floatToBinaryString(f) << std::endl;

	return (0);
}*/