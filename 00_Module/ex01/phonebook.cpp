/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:29:58 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/14 18:48:11 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook( void )
{
	std::cout << "Constructor call :D " << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void )	
{
	std::cout << "Destructor call :D " << std::endl;
	return ;
}

void	PhoneBook::add_contact( void )
{
	std::cout << "------ Contact Creator ------ " << std::endl;
	
}

int getline_scan ( int n )
{
	if ( n == 0 )
		return (1);
	return (0);
}
int main () {
	
	PhoneBook	instance;
	std::string	prompt;
	
	while (1)
	{
		std::cout << "ACP: ";

question:

		n = getline(std::cin, prompt);
		if (getline_scan(n))
			goto question;
		if (prompt.compare("ADD") == 0)
			instance.add_contact();
		else if (prompt.compare("SEARCH") == 0)
			std::cout << prompt << std::endl;
		else if (prompt.compare("EXIT") == 0)
			break ;
	}
	
	return (0);
}
	