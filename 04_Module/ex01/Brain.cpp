/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:03:57 by hiper             #+#    #+#             */
/*   Updated: 2023/09/15 17:17:33 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "Default Constructor called of Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	int  i = 0;
	while (i <= 99)
	{
		this->ideias[i].assign(copy.ideias[i]); i++;
	}
	std::cout << "Copy Constructor called of Brain" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "Destructor called of Brain" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &assign)
{
	int  i = 0;
	while (i <= 99)
	{
		this->ideias[i].assign(assign.ideias[i]); i++;
	}

	std::cout << "Copy assignmente operator called of Brain" << std::endl;

	return *this;
}

