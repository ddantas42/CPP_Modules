/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:42:43 by hiper             #+#    #+#             */
/*   Updated: 2023/09/19 17:40:30 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include "Character.hpp"

class AMateria
{
	protected:
		std::string type;

	public:
		// Constructors
		AMateria();
		AMateria(const AMateria &copy);
		AMateria(std::string const & type);
		// Destructor
		~AMateria();
		
		// Operators
		AMateria & operator=(const AMateria &assign);
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

/* --- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- */
/* --- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- */
/* --- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- Ice --------- */

class Ice : public AMateria
{
	public:
		// Constructors
		Ice();
		Ice(const Ice &copy);
		
		// Destructor
		~Ice();
		
		// Operators
		Ice & operator=(const Ice &assign);
		
	private:
		
};

/* --- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- */
/* --- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- */
/* --- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- Cure --------- */

class Cure : public AMateria
{
	public:
		// Constructors
		Cure();
		Cure(const Cure &copy);
		
		// Destructor
		~Cure();
		
		// Operators
		Cure & operator=(const Cure &assign);
		
	private:
		
};

#endif