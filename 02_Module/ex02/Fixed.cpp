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


/*			comparisons operators		*/
int Fixed::operator>( const Fixed &a )
{
	if (this->toFloat() > a.toFloat())
		return (1);
	return (0);
}

int Fixed::operator<( const Fixed &a )
{
	if (this->toFloat() < a.toFloat())
		return (1);
	return (0);
}

int Fixed::operator>=( const Fixed &a )
{
	if (this->toFloat() >= a.toFloat())
		return (1);
	return (0);
}

int Fixed::operator<=( const Fixed &a )
{
	if (this->toFloat() <= a.toFloat())
		return (1);
	return (0);
}

int Fixed::operator==( const Fixed &a )
{
	if (this->toFloat() == a.toFloat())
		return (1);
	return (0);
}

int Fixed::operator!=( const Fixed &a )
{
	if (this->toFloat() != a.toFloat())
		return (1);
	return (0);
}

/*
/*			arithmetic operators		*/

/*
int	Fixed::operator+( const Fixed &a )
{
	int ret;

	ret = a.getRawBits() + this->getRawBits();
	return (ret);
}

int Fixed::operator-( const fixed &a )
{
	return (0);
}

int Fixed::operator*( const fixed &a )
{
	return (0);
}

int Fixed::operator/( const fixed &a )
{
	return (0);
}

Fixed operator++( void )
{
	return (0);
}

Fixed operator++( int n )
{
	return (0);
}


Fixed operator--( void )
{
	return (0);
}

Fixed operator--( int n )
{
	return (0);
}

/*			overload funtions			*/
/*
int &min( int &fp, int &fp2 )
{
	int n = 0;
	int &n2 = n;

	return (n2);
}

int &min( const int &fp, const int &fp2 )
{
	int n = 0;
	int &n2 = n;

	return (n2);
}


int &max( int &fp, int &fp2 )
{
	int n = 0;
	int &n2 = n;

	return (n2);
}

int &max( const int &fp, const int &fp2 )
{
	int n = 0;
	int &n2 = n;

	return (n2);
}








/* ---------------------------------------------------- */

Fixed::Fixed( void ) : fixed_point(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n )
{
	this->fixed_point = n * (1 << this->fractional_bits);
	// std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed( const float n )
{
	// std::cout << "float constructor called" << std::endl;
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
	// std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = instance.fixed_point;
}

void Fixed::operator=( const Fixed &F )
{
	// std::cout << "Copy assignmente Fixed::operator called" << std::endl;
	this->fixed_point = F.fixed_point;
}

Fixed::~Fixed( void )
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void )
{
	// std::cout << "getRawBits member function called" << std::endl;

	return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits called" << std::endl;
	this->fixed_point = raw;
}