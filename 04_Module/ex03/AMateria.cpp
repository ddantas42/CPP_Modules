/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:38:22 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/21 20:44:11 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Materials.hpp"

// Constructors
AMateria::AMateria()
{
	this->type = "none";
}

AMateria::AMateria(const AMateria &copy) {(void) copy;}


// Destructor
AMateria::~AMateria() {}


// Operators
AMateria & AMateria::operator=(const AMateria &assign) {(void) assign;	return *this;}


// Constructors
IMateriaSource::IMateriaSource() {}

IMateriaSource::IMateriaSource(const IMateriaSource &copy) {(void) copy;}

// Operators
IMateriaSource & IMateriaSource::operator=(const IMateriaSource &assign) {(void) assign;	return *this;}

// Constructors
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)  : IMateriaSource(copy) {(void) copy;}

// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
}

// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign) {(void) assign;	return *this;}


void MateriaSource::learnMateria(AMateria *new_materia)
{
	static int i = 0;

	if (i >= 4)
	{
		std::cout << "MateriaSource is full" << std::endl;
		return ;
	}
	this->materia[i++] = new_materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *materia;
	
	int i = 0;
	while (i < 4)
	{
		if (this->materia[i] != NULL && this->materia[i]->getType().compare(type) == 0)
		{
			materia = this->materia[i]->clone();
			return materia;
		}
		i++;
	}
	materia = NULL;
	std::cout << "Materia not found" << std::endl;
	return materia;
}

void MateriaSource::print_materias( void )
{
	int i = 0;
	while (i < 4)
	{
		if (this->materia[i] != NULL)
			std::cout << this->materia[i]->getType() << std::endl;
		i++;
	}
}
