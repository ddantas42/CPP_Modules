/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:27:35 by hiper             #+#    #+#             */
/*   Updated: 2023/09/16 16:55:25 by hiper            ###   ########.fr       */
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

Dog::Dog(const Dog &copy) : Animal (copy.getType())
{
	
	this->type.assign(copy.getType());
	this->brain = new Brain();
	int i = 0;
	while (i < 100)
	{
		this->brain->ideias[i].assign(copy.brain->ideias[i]);
		i++;
	}
	std::cout << "Copy Constructor called of Dog" << std::endl;
}

// Destructor
Dog::~Dog()
{
	delete this->brain;
	std::cout << "Destructor called of Dog" << std::endl;
}

// Operators
Dog & Dog::operator=(const Dog &copy)
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
	return *this;
}

void    Dog::makeSound( void ) const
{
    std::cout << "woof woof" << std::endl;
}

void	Dog::showIdeas( void ) const
{
	std::cout << "dog ideias:" << std::endl;

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

Brain *Dog::getBrain() const
{
	return (this->brain);
}