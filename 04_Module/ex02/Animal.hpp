/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:25:17 by hiper             #+#    #+#             */
/*   Updated: 2023/09/14 01:12:47 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
		Animal();
		Animal(const Animal &copy);
		Animal(std::string type);
	
	public:
		// Constructors
		
		// Destructor
		virtual ~Animal();
		
		// Operators
		Animal & operator=(const Animal &assign);
		std::string getType(void) const;
		
		void virtual makeSound(void) const;
};

#endif