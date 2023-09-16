/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:59:02 by hiper             #+#    #+#             */
/*   Updated: 2023/09/16 16:51:50 by hiper            ###   ########.fr       */
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
	int i = 0;
	while (i < 100)
	{
		this->brain->ideias[i].assign(copy.brain->ideias[i]);
		i++;
	}
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

	this->type.assign(copy.type);
	this->brain = new Brain();
	int i = 0;
	while (i < 100)
	{
		this->brain->ideias[i].assign(copy.brain->ideias[i]);
		i++;
	}
	std::cout << "Copy assignmente operator called of Cat" << std::endl;
	return *this;
}

void    Cat::makeSound( void ) const
{
    std::cout << "meow meow" << std::endl;
}

void	Cat::showIdeas( void ) const
{
	std::cout << "cat ideias:" << std::endl;

	int i = 0;
	while (this->brain->ideias[i].size())
	{
		std::cout 
			<< "ideia " << i + 1 << ": "
			<< this->brain->ideias[i]
			<< std::endl;
		i++;
	}
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
