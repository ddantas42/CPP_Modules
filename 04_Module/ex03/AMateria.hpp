#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "Character.hpp"

class AMateria
{
	public:
		// Constructors
		AMateria();
		AMateria(const AMateria &copy);
		
		// Destructor
		~AMateria();
		
		// Operators
		AMateria & operator=(const AMateria &assign);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		
	private:
		
};

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

		AMateria* clone() const;
		void use(ICharacter& target);
		
};

class Cure : public AMateria
{
	private:
		std::string type;

	public:
		// Constructors
		Cure();
		Cure(const Cure &copy);
		
		// Destructor
		~Cure();
		
		// Operators
		Cure & operator=(const Cure &assign);

		AMateria* clone() const;
		void use(ICharacter& target);
		
};

#endif