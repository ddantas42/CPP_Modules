/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:29:58 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/15 23:08:31 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void print_left_spaces( std::string name )
{
	int	size = name.size();
	
	if (size == 9 || size == 8)
		std::cout << " ";
	else if (size == 7 || size == 6)
		std::cout << "  ";
	else if (size == 5 || size == 4)
		std::cout << "   ";
	else if (size == 3 || size == 2)
		std::cout << "    ";
	else if (size == 1)
		std::cout << "     ";
		
}

void print_right_spaces( std::string name )
{
	int	size = name.size();
	
	if (size == 8 || size == 7)
		std::cout << " ";
	else if (size == 6 || size == 5)
		std::cout << "  ";
	else if (size == 4 || size == 3)
		std::cout << "   ";
	else if (size == 2 || size == 1)
		std::cout << "    ";
}

void	PhoneBook::print_name( std::string name )
{
	std::string temp;
	
	print_left_spaces(name);
	if (name.size() > 10)
	{
		temp.assign(name.substr(0, 9));
		temp.append(".");
		std::cout << temp;
	}
	else
		std::cout << name;
	print_right_spaces(name);
	std::cout << "|";
}

std::string get_info( const std::string question, std::string prompt )
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
	std::string prompt;
	int			index = 0;
	
	std::cout << "|  index   |First Name| Last name| Nickname |" << std::endl;
	for (int i = 0; this->contacts[i].index > 0; i++)
	{
		std::cout << "|    " << this->contacts[i].index << "     |";
		this->print_name(this->contacts[i].first_name);
		this->print_name(this->contacts[i].last_name);
		this->print_name(this->contacts[i].nickname);
		std::cout << std::endl;
		if (i == 7)
			break ;
	}
	std::cout << std::endl;
	
	prompt = get_info("index: ", prompt);
	if (stoi(prompt) >= 1 && stoi(prompt) <= 8 && this->contacts[stoi(prompt) - 1].index > 0)
		index = stoi(prompt) - 1;
	else
	{
		std::cout << "invalied input" << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "first name: " << this->contacts[index].first_name << std::endl;
	std::cout << "last name: " << this->contacts[index].last_name << std::endl;
	std::cout << "nickname: " << this->contacts[index].nickname << std::endl;
	std::cout << "darkest secret: " << this->contacts[index].dark_secret << std::endl;
	std::cout << "Phone Number: " << this->contacts[index].phone_nbr << std::endl;
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
		
	}
	return (0);
}
	