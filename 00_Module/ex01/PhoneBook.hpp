/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:11:50 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/15 12:16:50 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook {

	
	public:
		Contact contacts[8];
		PhoneBook ( void );
		~PhoneBook ( void );
		void add_contact ( void );		
		void print_contact ( void );

};

#endif