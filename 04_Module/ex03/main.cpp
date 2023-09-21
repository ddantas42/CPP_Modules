/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:02:27 by hiper             #+#    #+#             */
/*   Updated: 2023/09/21 21:34:16 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "Materials.hpp"

int main()
{

	MateriaSource src;
	src.learnMateria(new Ice());

	MateriaSource src2(src);
	
	MateriaSource src3;
	src3 = src;


	Ice ice;

	
	Character Diogo("Diogo");
	
	Diogo.use(0, Diogo);
	
	return 0;
}

// int main()
// {
// 	IMateriaSource* src2 = new MateriaSource();
// 	src2->learnMateria(new Ice());
// 	src2->learnMateria(new Cure());
	
// 	IMateriaSource* src(src2);

// 	src->print_materias();
	
// 	ICharacter* me = new Character("me");
	
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	me->use(2, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
	
// 	ICharacter* me = new Character("me");
	
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }
