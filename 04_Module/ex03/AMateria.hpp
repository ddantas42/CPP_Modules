#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "Character.hpp"


class AMateria
{
	protected:
		std::string type;

	public:
		// Constructors
		AMateria();
		AMateria(const AMateria &copy);
		
		// Destructor
		virtual ~AMateria();
		
		// Operators
		AMateria & operator=(const AMateria &assign);

		std::string const & getType() const {return this->type;};

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) {(void)target;};
		
};

class IMateriaSource
{
	protected:
		IMateriaSource();
		IMateriaSource(const IMateriaSource &copy);
		IMateriaSource & operator=(const IMateriaSource &assign);

	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria *new_materia) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

		virtual void print_materias( void ) = 0; // Added


};

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];
		
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource & operator=(const MateriaSource &assign);
		~MateriaSource();

		void learnMateria(AMateria *new_materia);
		AMateria* createMateria(std::string const & type);

		void print_materias( void ); // Added
};

#endif