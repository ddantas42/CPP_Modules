/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:31:14 by hiper             #+#    #+#             */
/*   Updated: 2023/09/14 00:16:16 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
	private:
		Brain *brain;
	
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);
		
		// Destructor
		~Cat();
		
		// Operators
		Cat & operator=(const Cat &assign);

		void makeSound() const;
};

#endif