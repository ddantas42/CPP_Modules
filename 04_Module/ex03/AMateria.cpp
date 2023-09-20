/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:38:22 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/20 18:53:58 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
AMateria::AMateria() {}

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
MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource &copy) {(void) copy;}

// Destructor
MateriaSource::~MateriaSource() {}

// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign) {(void) assign;	return *this;}
