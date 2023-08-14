/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:29:58 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/14 19:20:46 by ddantas-         ###   ########.fr       */
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
	std::string	prompt;
	
	std::cout << " ------ Contact Creator ------ " << std::endl;
	
	while (1)
	{
		std::cout << "Input first name:";
		getline(std::cin, prompt);
		if (prompt.size() > 0)
			break ;
	}

	while (1)
	{
		std::cout << "Input last name:";
		getline(std::cin, prompt);
		if (prompt.size() > 0)
			break ;
	}

	while (1)
	{
		std::cout << "Input nickname:";
		getline(std::cin, prompt);
		if (prompt.size() > 0)
			break ;
	}
	
	while (1)
	{
		std::cout << "Input phone number:";
		getline(std::cin, prompt);
		if (prompt.size() > 0)
			break ;
	}
	
}

int main () {
	
	PhoneBook	instance;
	std::string	prompt;
	
	while (1)
	{
		prompt.clear();
		std::cout << "ACP: ";
		getline(std::cin, prompt);
		
		if (prompt.compare("ADD") == 0)
			instance.add_contact();
		else if (prompt.compare("SEARCH") == 0)
			std::cout << prompt << std::endl;
		else if (prompt.compare("EXIT") == 0)
			break ;
	}
	
	return (0);
}
	