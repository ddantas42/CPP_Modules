/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:29:44 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/15 12:07:47 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include "PhoneBook.hpp"

class Contact {

	public:
		Contact ( void );
		~Contact ( void );
		
		std::string	first_name;	
		std::string	last_name;	
		std::string	nickname;	
		std::string	dark_secret;	
		char 	*pointer;
		int		phone_nbr;
		int		index;
};

#endif