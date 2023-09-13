/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:59:02 by hiper             #+#    #+#             */
/*   Updated: 2023/09/13 15:19:10 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal()
{
	this->type.assign("Cat");
	std::cout << "Default Constructor called of Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Constructor called of Cat" << std::endl;
	this->type.assign(copy.type);
}

// Destructor
Cat::~Cat()
{
	std::cout << "Destructor called of Cat" << std::endl;
}

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	this->type.assign(assign.type);
	return *this;
}

void    Cat::makeSound( void ) const
{
    std::cout << "meow meow" << std::endl;
}