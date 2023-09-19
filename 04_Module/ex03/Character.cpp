/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:20:12 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/19 17:38:05 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"


// Constructors
ICharacter::ICharacter()
{
	std::cout << "Default Constructor called of ICharacter" << std::endl;
}

ICharacter::ICharacter(const ICharacter &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of ICharacter" << std::endl;
}


// Operators
ICharacter & ICharacter::operator=(const ICharacter &assign)
{
	(void) assign;
	return *this;
}

/* ----------Character -----------Character -----------Character -----------Character -----------Character ---------  */
/* ----------Character -----------Character -----------Character -----------Character -----------Character ---------  */
/* ----------Character -----------Character -----------Character -----------Character -----------Character ---------  */

// Constructors
Character::Character()
{
	std::cout << "Default Constructor called of Character" << std::endl;
}

Character::Character(const Character &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of Character" << std::endl;
}


// Destructor
Character::~Character()
{
	std::cout << "Destructor called of Character" << std::endl;
}


// Operators
Character & Character::operator=(const Character &assign)
{
	(void) assign;
	return *this;
}
