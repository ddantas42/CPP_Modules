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
#include "Form.hpp"

int main()
{
	Bureaucrat	Josh("Josh", 1);
	Bureaucrat Jam("Jam", 150);

	Form		form("hey_form", 10, 10);
	
	std::cout << Josh;	
	std::cout << Jam << std::endl;	
	std::cout << form << std::endl;	
	
	form.beSigned(Jam);
	form.beSigned(Josh);
	std::cout << std::endl;
	std::cout << form << std::endl;	
	

	return 0;
}