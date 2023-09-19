#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>
# include "Materia.hpp"

class ICharacter
{
	public:
		// Constructors
		ICharacter();
		ICharacter(const ICharacter &copy);
		
		// Destructor
		virtual ~ICharacter() {}

		// Operators
		ICharacter & operator=(const ICharacter &assign);
		
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		
};

/* ----------Character -----------Character -----------Character -----------Character -----------Character ---------  */
/* ----------Character -----------Character -----------Character -----------Character -----------Character ---------  */
/* ----------Character -----------Character -----------Character -----------Character -----------Character ---------  */

class Character : public ICharacter
{
	public:
		// Constructors
		Character();
		Character(const Character &copy);
		
		// Destructor
		~Character();
		
		// Operators
		Character & operator=(const Character &assign);
		
	private:
		
};

#endif