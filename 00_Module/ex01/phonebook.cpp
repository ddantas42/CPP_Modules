/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:29:58 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/15 12:19:56 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

std::string get_info( const std::string question, std::string prompt , int option)
{
	while (1)
	{
		prompt.clear();
		std::cout << question;
		getline(std::cin, prompt);
		if (prompt.size() > 0)
			break ;
	}
	return (prompt);
}

void	PhoneBook::print_contact ( void )
{
	
}

void	PhoneBook::add_contact( void )
{
	std::string	prompt;
	static int	index = 0;
	std::cout << " ------ Contact Creator ------ " << std::endl;
	
	prompt = get_info( "Input first name: ", prompt, 0);
	this->contacts[index].first_name.assign(prompt);

	prompt = get_info( "Input last name: ", prompt, 0);
	this->contacts[index].last_name.assign(prompt);

	prompt = get_info( "Input nickname: ", prompt, 0);
	this->contacts[index].nickname.assign(prompt);

	prompt = get_info( "Input phone number: ", prompt, 1);
	this->contacts[index].phone_nbr = stoi(prompt);
	
	prompt = get_info( "Input darkest secret...: ", prompt, 0);
	this->contacts[index].dark_secret.assign(prompt);
	
	this->contacts[index].index = index + 1;
	std::cout << " ------ Contact Created ------ " << std::endl;
	index++;
	if (index >= 8)	index = 0;
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
		
		/*int i = 0;
		while (!instance.contacts[i].first_name.empty())
		{
			std::cout << "contact[" << i << "].first_name = "
			<< instance.contacts[i].first_name << std::endl;
			i++;
		}*/
	}
	return (0);
}
	