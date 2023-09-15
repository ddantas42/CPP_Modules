/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:03:59 by hiper             #+#    #+#             */
/*   Updated: 2023/09/15 18:05:13 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	protected:
	
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		std::string ideias[100];
		
		// Destructor
		virtual ~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);
		
};

#endif