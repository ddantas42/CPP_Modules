/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:01:31 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/15 22:39:57 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact( void ) : index(-1)
{
	std::cout << "Contact Constructor call :D " << std::endl;
	return ;
}

Contact::~Contact( void )
{
	std::cout << "Contact Destructor call :D " << std::endl;
	return ;
}

PhoneBook::PhoneBook( void )
{
	std::cout << "PhoneBook Constructor call :D " << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void )	
{
	std::cout << "PhoneBook Destructor call :D " << std::endl;
	return ;
}