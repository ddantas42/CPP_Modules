/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   Fixed.cpp										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ddantas- <ddantas-@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/08/23 02:09:07 by hiper			 #+#	#+#			 */
/*   Updated: 2023/08/26 20:26:39 by ddantas-		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n )
{
	this->fixed_point = n * (1 << this->fractional_bits);
	std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed( const float n )
{
	std::cout << "float constructor called" << std::endl;
	this->fixed_point = static_cast<int>(roundf(n * static_cast<float>(1 << this->fractional_bits)));
}

float   Fixed::toFloat( void ) const
{
	float ret;

	ret = static_cast<float>(this->fixed_point) / static_cast<float>(1 << this->fractional_bits);
	
	return (ret);
}

int	 Fixed::toInt( void ) const
{
	int ret;

	ret = this->fixed_point / (1 << this->fractional_bits);
	
	return (ret);
}

std::ostream &operator<<( std::ostream &out, Fixed const & i  )
{
	out << i.toFloat();
	return (out);
}






Fixed::Fixed( const Fixed &instance)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = instance.fixed_point;
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