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
#include "Serializer.hpp"

// Char size 1 byte
// Int size 4 bytes
// Float size 4 bytes
// Double size 8 bytes

// unsigned long int size 8 bytes


void print_data(Data *data)
{
	std::cout << "Data: " << std::endl;
	std::cout << "Int: " << data->i << std::endl;
	std::cout << "Char: " << data->c << std::endl;
	std::cout << "Float: " << data->f << std::endl;
	std::cout << "Double: " << data->d << std::endl;

	std::cout << "Int2: " << data->i2 << std::endl;
	std::cout << "Char2: " << data->c2 << std::endl;
	std::cout << "Float2: " << data->f2 << std::endl;
	std::cout << "Double2: " << data->d2 << std::endl;
}

int main()
{

	struct Data data;

	data.i = 42;
	data.c = 'a';
	data.f = 42.42f;
	data.d = 42.42;

	data.i2 = 21;
	data.c2 = 'b';
	data.f2 = 21.21f;
	data.d2 = 21.21;


	print_data(&data);

	uintptr_t serialized = Serializer::serialize(&data);
	std::cout << std::endl;

	std::cout << "Serialized: " << serialized << std::endl;

	Data *data_deserialized = Serializer::deserialize(serialized);

	std::cout << std::endl;
	print_data(data_deserialized);

	
	return 0;
}