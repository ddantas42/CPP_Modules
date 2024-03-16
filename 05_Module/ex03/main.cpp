/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:30:39 by hiper             #+#    #+#             */
/*   Updated: 2024/03/16 16:55:19 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
	// Bureaucrat	Josh("Josh", 1);
	// Bureaucrat	Jam("Jam", 150);
	Intern intern;
	AForm *form;

	form = intern.makeForm("lerobotomy request", "My Home");
	
	// Josh.executeForm(*form);
	// Josh.signAForm(*form);
	// Josh.executeForm(*form);

(void)form;
	std::cout << std::endl;
	
	return 0;
}