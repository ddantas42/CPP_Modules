/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:30:39 by hiper             #+#    #+#             */
/*   Updated: 2024/03/07 11:35:58 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	Josh("Josh", 1);
	Bureaucrat Jam("Jam", 150);

	Form		form("hey_form", 10, 10);
	
	std::cout << Josh;	
	std::cout << Jam << std::endl;	
	std::cout << form << std::endl;	
	
	try {
		form.beSigned(Jam);
		std::cout << "here" << std::endl;
		form.beSigned(Josh);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		Josh.signForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << form << std::endl;	
	

	return 0;
}