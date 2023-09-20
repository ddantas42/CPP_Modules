/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:45:43 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/21 00:20:25 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Materials.hpp"

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

std::string const & Character::getName() const
{
	return this->name;
}


void Character::equip(AMateria* m)
{
	static int i = 0;
	
	if (i >= 4)
		i = 0;
	this->inventory[i++] = m;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
		this->inventory[idx]->use(target);
	(void)idx;
	(void)target;
};

