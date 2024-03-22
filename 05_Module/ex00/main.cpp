/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:30:39 by hiper             #+#    #+#             */
/*   Updated: 2023/10/13 22:24:22 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Josh("Josh", 1);
	Bureaucrat Josh2 = Josh;
	Bureaucrat Josh3(Josh);
	
	std::cout << Josh;

	try {
		Josh.incrementGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << Josh << std::endl;

	try {
		Josh.decrementGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << Josh;
	std::cout << Josh2;
	std::cout << Josh3;
	
	return 0;
}