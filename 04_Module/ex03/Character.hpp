/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:45:39 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/22 15:45:08 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

class AMateria;

class ICharacter 
{
	protected:
		ICharacter();
		ICharacter(const ICharacter &copy);
		
	public:
		// Constructors
		
		// Destructor
		virtual ~ICharacter() {};
		
		// Operators
		ICharacter & operator=(const ICharacter &assign);
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

		
};

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
		
	public:
		// Constructors
		Character();
		Character(std::string name);
		Character(const Character &copy);
		
		// Destructor
		~Character();
		
		// Operators
		Character & operator=(const Character &assign);
		std::string const & getName() const ;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
		AMateria *ground[10000];
};



#endif