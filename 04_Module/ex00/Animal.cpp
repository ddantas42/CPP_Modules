/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:24:30 by hiper             #+#    #+#             */
/*   Updated: 2023/09/10 00:00:38 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	std::cout << "Default Constructor called of Animal" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Default Constructor called of Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	this->type.assign(copy.type);

	std::cout << "Copy Constructor called of Animal" << std::endl;
}


// Destructor
Animal::~Animal()
{
	std::cout << "Destructor called of Animal" << std::endl;
}


// Operators
Animal & Animal::operator=(const Animal &assign)
{
	this->type.assign(assign.type);
	return *this;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void    Animal::makeSound( void ) const
{
    std::cout << "Uknown animal sound" << std::endl;
}