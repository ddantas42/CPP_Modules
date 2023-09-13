/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:43:16 by hiper             #+#    #+#             */
/*   Updated: 2023/09/14 00:54:17 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal()
{
	this->type.assign("WrongCat");
	std::cout << "Default Constructor called of WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal (copy.getType())
{
	std::cout << "Copy Constructor called of WrongCat" << std::endl;
	this->type.assign(copy.type);
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "Destructor called of WrongCat" << std::endl;
}

// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	this->type.assign(assign.type);
	return *this;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "meow meow" << std::endl;
}