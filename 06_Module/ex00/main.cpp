/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:30:39 by hiper             #+#    #+#             */
/*   Updated: 2024/03/19 17:02:10 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{

	// std::cout << "Int max: " << std::numeric_limits<int>::max() << std::endl;
	// std::cout << "Int max define: " << INT32_MAX << std::endl;

	// std::cout << "Int min: " << std::numeric_limits<int>::min() << std::endl;
	// std::cout << "Int min define: " << INT32_MIN << std::endl;

	// std::cout << "Float max: " << std::numeric_limits<float>::max() << std::endl;
	// std::cout << "Float min: " << std::numeric_limits<float>::min() << std::endl;

	// std::cout << "Double max: " << std::numeric_limits<double>::max() << std::endl;
	// std::cout << "Double max define: " << __DBL_MAX__ << std::endl;

	// std::cout << "Double min: " << std::numeric_limits<double>::min() << std::endl;
	// std::cout << "Double max define: " << __DBL_MIN__ << std::endl;

	// return 0;


	if (argc == 2)
	{
		std::string str = argv[1];
		if (str.length() == 0)
		{
			std::cout << "Error: ./convert [value]" << std::endl;
			return 1;
		}
		
		ScalarConverter::convert(argv[1]);
	}
	else
		std::cout << "Error: ./convert [value]" << std::endl;
	return 0;
}