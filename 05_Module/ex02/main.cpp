/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:30:39 by hiper             #+#    #+#             */
/*   Updated: 2024/03/13 17:46:45 by hiper            ###   ########.fr       */
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
	
	Shrubbery.execute(Josh);
	Robotomy.execute(Josh);
	Presidential.execute(Josh);

	Shrubbery.execute(Jam);
	Robotomy.execute(Jam);
	Presidential.execute(Jam);

	Josh.signAForm(Shrubbery);
	Shrubbery.execute(Jam);
	Shrubbery.execute(Josh);

	std::cout << std::endl;
	

	return 0;
}