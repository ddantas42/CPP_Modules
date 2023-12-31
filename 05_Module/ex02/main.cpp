/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:30:39 by hiper             #+#    #+#             */
/*   Updated: 2023/10/15 20:38:44 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
	Bureaucrat	Josh("Josh", 1);
	Bureaucrat	Jam("Jam", 150);
	ShrubberyCreationForm	Shrubbery;
	RobotomyRequestForm		Robotomy;

	std::cout << Josh;	
	std::cout << Jam << std::endl;	
	
	Shrubbery.execute(Josh);
	Robotomy.execute(Josh);
	std::cout << std::endl;
	

	return 0;
}