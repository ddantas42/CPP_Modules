/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:01:31 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/06 15:02:11 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact( void ) : index(-1)
{
	// std::cout << "Contact Constructor call :D " << std::endl;
	return ;
}

Contact::~Contact( void )
{
	first_name.clear();
    last_name.clear();
    nickname.clear();
    dark_secret.clear();
    phone_nbr.clear();
    index = 0;
	// std::cout << "Contact Destructor call :D " << std::endl;
	return ;
}

PhoneBook::PhoneBook( void )
{
	// std::cout << "PhoneBook Constructor call :D " << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void )	
{
	// std::cout << "PhoneBook Destructor call :D " << std::endl;
	return ;
}