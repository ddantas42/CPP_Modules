/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:27:35 by hiper             #+#    #+#             */
/*   Updated: 2023/09/10 17:42:55 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal()
{
	this->type.assign("Dog");
	this->brain = new Brain();
	std::cout << "Default Constructor called of Dog" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy Constructor called of Dog" << std::endl;
	this->type.assign(copy.type);
}

// Destructor
Dog::~Dog()
{
	delete this->brain;
	std::cout << "Destructor called of Dog" << std::endl;
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	this->type.assign(assign.type);
	return *this;
}

void    Dog::makeSound( void ) const
{
    std::cout << "woof woof" << std::endl;
}