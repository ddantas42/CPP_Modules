/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:45:43 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/20 17:14:48 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
}

// Destructor
Character::~Character()
{
}


// Operators
Character & Character::operator=(const Character &assign)
{
	(void) assign;
	return *this;
}

ICharacter::ICharacter()
{	
}

ICharacter::ICharacter(const ICharacter &copy)
{
	(void) copy;
}

// Operators
ICharacter & ICharacter::operator=(const ICharacter &assign)
{
	(void) assign;
	return *this;
}

// std::string const & Character::getName() const
// {
// 	return this->name;
// }