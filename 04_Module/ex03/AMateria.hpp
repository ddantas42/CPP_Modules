#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

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

#endif