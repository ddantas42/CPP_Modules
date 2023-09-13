/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:42:20 by hiper             #+#    #+#             */
/*   Updated: 2023/09/10 16:42:26 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal()
{
	std::cout << "Default Constructor called of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "Default Constructor called of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	this->type.assign(copy.type);

	std::cout << "Copy Constructor called of WrongAnimal" << std::endl;
}


// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called of WrongAnimal" << std::endl;
}


// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	this->type.assign(assign.type);
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const
{
    std::cout << "Unknown WrongAnimal sound" << std::endl;
}