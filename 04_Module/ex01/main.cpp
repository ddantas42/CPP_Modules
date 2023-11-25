/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:01:50 by ddantas-          #+#    #+#             */
/*   Updated: 2023/09/16 16:56:17 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongCat.hpp"

// int main()
// {
// 	Dog creative;

// 	std::cout << std::endl;

// 	creative.showIdeas();
// 	creative.getBrain()->ideias[0] = "I should cut my nails!";
// 	creative.getBrain()->ideias[1] = "Agua de coco!";
// 	creative.showIdeas();
// 	std::cout << std::endl;
	
// 	Dog Ideia_thief;

// 	Ideia_thief.showIdeas();
	
// 	Ideia_thief = creative;
// 	std::cout << std::endl;

// 	Ideia_thief.showIdeas();
	
// 	std::cout << std::endl;
	
// 	return (0);
// }

// int main()
// {
// 	Animal *DogAnimals[10];
// 	Animal *CatAnimals[10];

// 	int i = 0;

// 	while (i < 10)
// 	{
// 		DogAnimals[i] = new Dog();
// 		CatAnimals[i] = new Cat();
// 		i++;
// 	}

// 	i = 0;
// 	while (i < 10)
// 	{
// 		delete DogAnimals[i];
// 		delete CatAnimals[i];
// 		i++;
// 	}
// 	return (0);
// }

// int main()
// {
// 	Cat catlin;
// 	std::cout << std::endl;

// 	catlin.makeSound();

// 	std::cout << std::endl;
	
// 	Cat copy(catlin);

// 	std::cout << std::endl;
	
// 	copy.makeSound();

// 	std::cout << std::endl;
// 	return (0);
// }

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	
	return 0;
}

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* Dog1 = new Dog();
// 	const Animal* Cat1 = new Cat();
// 	std::cout << std::endl;
	
// 	std::cout << Dog1->getType() << " " << std::endl;
// 	std::cout << Cat1->getType() << " " << std::endl;
	
// 	std::cout << std::endl;

// 	Cat1->makeSound(); //will output the cat sound!
// 	Dog1->makeSound();
// 	meta->makeSound();
	
// 	std::cout << std::endl;
// 	delete meta;
// 	delete Dog1;
// 	delete Cat1;
// 	std::cout << std::endl;
// 	std::cout << std::endl;

// 	const WrongAnimal* meta2 = new WrongAnimal();
// 	const WrongAnimal* WrongCat1 = new WrongCat();

// 	std::cout << WrongCat1->getType() << " " << std::endl;
// 	std::cout << std::endl;
	
// 	meta2->makeSound();
// 	WrongCat1->makeSound();
	
// 	std::cout << std::endl;

// 	delete meta2;
// 	delete WrongCat1;
	
// 	return 0;
// }