/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:45:43 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/21 16:24:21 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Materials.hpp"

Character::Character()
{
	this->name = "Default";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int n = 0; n < 10000; n++)
		this->ground[n] = NULL;
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int n = 0; n < 10000; n++)
		this->ground[n] = NULL;
}

// Destructor
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	for (int n = 0; n < 10000; n++)
	{
		if (this->ground[n])
			delete this->ground[n];
	}
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
	int i = 0;
	while (i < 4)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break ;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Inventory is full" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->inventory[idx] != NULL)
			this->inventory[idx]->use(target);
		else
			std::cout << "Inventory slot is empty" << std::endl;
	}
	else
		std::cout << "Invetory slot out of range" << std::endl;
};

void Character::unequip(int idx)
{
	static int i = 0;
	if (idx >= 0 && idx <= 3)
	{
		this->ground[i++] = this->inventory[idx];
		this->inventory[idx] = NULL;
	}
	else
		std::cout << "Invetory slot out of range" << std::endl;
}
