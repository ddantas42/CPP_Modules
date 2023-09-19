/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:08:53 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/19 17:19:18 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	std::cout << "Default Constructor called of MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of MateriaSource" << std::endl;
}


// Destructor
MateriaSource::~MateriaSource()
{
	std::cout << "Destructor called of MateriaSource" << std::endl;
}


// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	(void) assign;
	return *this;
}

// Constructors
IMateriaSource::IMateriaSource() : MateriaSource()
{
	std::cout << "Default Constructor called of IMateriaSource" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of IMateriaSource" << std::endl;
}


// Destructor
IMateriaSource::~IMateriaSource()
{
	std::cout << "Destructor called of IMateriaSource" << std::endl;
}


// Operators
IMateriaSource & IMateriaSource::operator=(const IMateriaSource &assign)
{
	(void) assign;
	return *this;
}