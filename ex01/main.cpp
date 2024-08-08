/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:57:14 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 17:50:01 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << CYAN << "the subject main:" << RESET << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << CYAN << "extra tests:" << RESET << std::endl;
	const Cat* c0 = new Cat();
	const Dog* d0 = new Dog();

	std::cout << GREEN << "Set the ideas" << std::endl;
	for (int i = 0; i < 100 ; i++) {
		c0->getBrain()->setNewIdea(i , "a delicious Pastrami sandwich");
		d0->getBrain()->setNewIdea(i, "A juicy bone");
	}

	std::cout << GREEN << "Print the ideas" << RESET << std::endl;
	c0->getBrain()->printIdeas();
	d0->getBrain()->printIdeas();

	std::cout << YELLOW << "Call the deconstructors" << RESET << std::endl;
	delete c0; // Clean up to avoid memory leak
	delete d0; // Clean up to avoid memory leak

	return 0;
}
