/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:03:59 by hiper             #+#    #+#             */
/*   Updated: 2023/09/13 22:40:21 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	protected:
		std::string ideias[100];
	
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		
		// Destructor
		virtual ~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);
		
};

#endif