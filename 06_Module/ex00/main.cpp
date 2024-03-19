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