/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:29:58 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/15 15:33:53 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

std::string get_info( const std::string question, std::string prompt)
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
	int	i = 0;
	
	for (int i = 0; this->contacts[i].index > 0; i++)
	{
		std::cout << "|  index   |First Name|Last name | Nickname |" << std::endl;
		std::cout << "|    " << i << "     |";
	}
	std::cout << std::endl;
}

void	PhoneBook::add_contact( void )
{
	std::string	prompt;
	static int	index = 0;
	std::cout << " ------ Contact Creator ------ " << std::endl;
	
	prompt = get_info( "Input first name: ", prompt);
	this->contacts[index].first_name.clear();
	this->contacts[index].first_name.assign(prompt);
	
	prompt = get_info( "Input last name: ", prompt);
	this->contacts[index].last_name.clear();
	this->contacts[index].last_name.assign(prompt);

	prompt = get_info( "Input nickname: ", prompt);
	this->contacts[index].nickname.clear();
	this->contacts[index].nickname.assign(prompt);

	prompt = get_info( "Input phone number: ", prompt);
	this->contacts[index].phone_nbr.clear();
	this->contacts[index].phone_nbr.assign(prompt);
	
	prompt = get_info( "Input darkest secret...: ", prompt);
	this->contacts[index].dark_secret.clear();
	this->contacts[index].dark_secret.assign(prompt);
	
	this->contacts[index].index = index + 1;
	std::cout << " ------ Contact Created ------ " << std::endl;
	index++;
	if (index >= 8)
		index = 0;
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
			instance.print_contact();
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
	