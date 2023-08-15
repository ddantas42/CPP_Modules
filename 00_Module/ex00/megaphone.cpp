/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:31:12 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/15 20:51:28 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void put_string_up(std::string *str)
{
	std::size_t	i = 0;

	while (i < (*str).size())
	{
		(*str)[i] = toupper((*str)[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	int			n = 1;
	std::string	str;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (n < argc)
		{
			str.append(argv[n]);
			put_string_up(&str);
			std::cout << str;
			str.clear();
			n++;
		}
		std::cout << std::endl;
	}
	return (0);
}