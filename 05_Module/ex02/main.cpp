/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:30:39 by hiper             #+#    #+#             */
/*   Updated: 2024/03/16 15:25:55 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	Bureaucrat				Josh("Josh", 1);
	Bureaucrat				Jam("Jam", 150);
	ShrubberyCreationForm	Shrubbery("My Home");
	RobotomyRequestForm		Robotomy("My Robot");
	PresidentialPardonForm	Presidential("Mr. President");
	
	std::cout << Josh;	
	std::cout << Jam << std::endl;	
	
	try {
		Jam.executeForm(Shrubbery);

		std::cout << "hello" << std::endl;
		Josh.signAForm(Shrubbery);
		Josh.signAForm(Presidential);
		Josh.signAForm(Robotomy);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}	
	
	std::cout << "////////////////" << std::endl;
	// Shrubbery.execute(Jam);
	
	try {
		Jam.executeForm(Shrubbery);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "////////////////" << std::endl;
	// Shrubbery.execute(Josh);
	Josh.executeForm(Shrubbery);
	// Josh.executeForm(Robotomy);
	// Robotomy.execute(Josh);

	std::cout << std::endl;
	

	return 0;
}