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
#include <ctime>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	srand(time(NULL));
	int i = rand() % 3;

	switch (i)
	{
		case 0:
		{
			// std::cout << "Created A" << std::endl;
			return new A();
		}
		case 1:
		{
			// std::cout << "Created B" << std::endl;
			return new B();
		}
	}

	// std::cout << "Created C" << std::endl;
	return new C();
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p)) // returning a pointer can be NULL or not NULL
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	
}

void identify(Base& p)
{
	try {
		dynamic_cast<A&>(p); // if not sucefull (not A type) throws an exception
		std::cout << "A" << std::endl;
	}
	catch (...) // any exceptions
	{
		// std::cout << "A failed to cast" << std::endl;
	}
	try {
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (...) 
	{
		// std::cout << "B failed to cast" << std::endl;
	}
	try {
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (...) 
	{
		// std::cout << "C failed to cast" << std::endl;
	}
}

int main(void)
{
	Base *base = generate();

	identify(base);
	identify(*base);

	delete base;
	return 0;
}