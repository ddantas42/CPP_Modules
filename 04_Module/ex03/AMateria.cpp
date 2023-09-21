/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:38:22 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/21 14:03:39 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Materials.hpp"

// Constructors
AMateria::AMateria() {}

AMateria::AMateria(const AMateria &copy) {(void) copy;}


// Destructor
AMateria::~AMateria() {}


// Operators
AMateria & AMateria::operator=(const AMateria &assign) {(void) assign;	return *this;}


// Constructors
IMateriaSource::IMateriaSource() {}

IMateriaSource::IMateriaSource(const IMateriaSource &copy){(void) copy;}

// Operators
IMateriaSource & IMateriaSource::operator=(const IMateriaSource &assign) {(void) assign;	return *this;}

// Constructors
MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource &copy)  : IMateriaSource(copy) {(void) copy;}

// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->materia[i];
}

// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign) {(void) assign;	return *this;}


void MateriaSource::learnMateria(AMateria *new_materia)
{
	static int i = 0;

	if (i >= 4)
		i = 0;
	this->materia[i++] = new_materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *materia;
	
	if (type.compare("ice") == 0)
		materia = new Ice();
	else if (type.compare("cure") == 0)
		materia = new Cure();
	else
		materia = NULL;

	return materia;
}
