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


/*int main() // overload functions
{
	Fixed a(10);
	Fixed b(20);

	Fixed a(10.1f);
	Fixed b(20.1f);

	std::cout << "max = " << Fixed::max( a, b ) << std::endl;
	std::cout << "max = " << Fixed::max( b, a ) << std::endl;
	std::cout << "min = " << Fixed::min( b, a ) << std::endl;
	std::cout << "min = " << Fixed::min( a, b ) << std::endl;

	return (0);
}
*/

/*int main() // increment/decrement operators
{
	Fixed a;

	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << --a << std::endl;

	return (0);
}*/

/*int main () // Arithmetic operators
{
	// Fixed a(10);
	// Fixed b(20);
	// Fixed c(10);

	// Fixed a(10.1f);
	// Fixed b(20.1f);
	// Fixed c(10.1f);

	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "c + b = " << c + b << std::endl;
	std::cout << "a + 200 = " << a + 200 << std::endl << std::endl;

	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "c - b = " << c - b << std::endl;
	std::cout << "a - 200 = " << a - 200 << std::endl << std::endl;

	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "c * b = " << c * b << std::endl;
	std::cout << "a * 200 = " << a * 200 << std::endl << std::endl;

	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "c / b = " << c / b << std::endl;
	std::cout << "a / 200 = " << a / 200 << std::endl;
	std::cout << "b / a = " << b / a << std::endl << std::endl;
	
	return (0);
}
*/

/*int main()  // Comparison operators
{
	// /*
	Fixed a(10);
	Fixed b(20);
	Fixed c(10);

	// /*
	Fixed a(10.1f);
	Fixed b(20.1f);
	Fixed c(10.1f);

	if (a > b)
		std::cout << "1 indeed: a > b = 1" << std::endl;
	if (a < b)
		std::cout << "2 indeed: a < b = 1" << std::endl;

	if (a >= c)
		std::cout << "3 indeed: a >= c = 1" << std::endl;
	if (c >= 10)
		std::cout << "4 indeed: c >= 10 = 1" << std::endl;

	if (a <= c)
		std::cout << "5 indeed: a <= c = 1" << std::endl;
	if (b <= c)
		std::cout << "6 indeed: b <= c = 1" << std::endl;

	if (c == a)
		std::cout << "7 indeed: c == a = 1" << std::endl;
	if (b == a)
		std::cout << "8 indeed: b == a = 1" << std::endl;

	if (a != 10)
		std::cout << "9 indeed: a != 10 = 1" << std::endl;
	if (a != c)
		std::cout << "10 indeed: a != c = 1" << std::endl;

	return (0);

}
*/


int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
