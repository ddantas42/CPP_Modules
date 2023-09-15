/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:59:02 by hiper             #+#    #+#             */
/*   Updated: 2023/09/15 18:59:19 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal()
{
	this->type.assign("Cat");
	this->brain = new Brain();
	std::cout << "Default Constructor called of Cat" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal (copy.getType())
{
	this->type.assign(copy.getType());
	this->brain = new Brain();
	std::cout << "Copy Constructor called of Cat" << std::endl;
}

// Destructor
Cat::~Cat()
{
	delete this->brain;
	std::cout << "Destructor called of Cat" << std::endl;
}

// Operators
Cat & Cat::operator=(const Cat &copy)
{
	delete this->brain;
		
	// this->brain = copy.brain
	// FIND a way to copy ALL brain ideias to new brain
	
	this->brain = new Brain(); // just not to segfault	
	(void)copy;
	std::cout << "Copy assignmente operator called of Cat" << std::endl;
	return *this;
}

void    Cat::makeSound( void ) const
{
    std::cout << "meow meow" << std::endl;
}