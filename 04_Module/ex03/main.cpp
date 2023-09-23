/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:02:27 by hiper             #+#    #+#             */
/*   Updated: 2023/09/23 01:13:41 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "Materials.hpp"

// int main()
// {
// 	MateriaSource src;
// 	src.learnMateria(new Ice());

// 	MateriaSource src2(src);
	
// 	MateriaSource src3;
// 	src3 = src;

// 	AMateria *tmp = NULL;
// 	tmp = new Ice();
	
// 	Character Diogo("Diogo");
// 	Diogo.equip(new Cure());
// 	Diogo.use(0, Diogo);
	
// 	Character clone(Diogo);
// 	clone.equip(new Ice());
// 	clone.use(0, Diogo);
// 	clone.use(1, Diogo);
	
// 	delete tmp;
// 	return 0;
// }

// int main()
// {
// 	IMateriaSource* mago = new MateriaSource();
// 	mago->learnMateria(new Ice());
// 	mago->learnMateria(new Cure());
	
// 	mago->print_materias();
	
// 	ICharacter* me = new Character("me");
	
// 	AMateria* tmp;
// 	tmp = mago->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = mago->createMateria("cure");
// 	me->equip(tmp);
// 	tmp = mago->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	me->use(2, *bob);

// 	delete bob;
// 	delete me;
// 	delete mago;
// 	return 0;
// }

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
