/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:57:14 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 16:13:38 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal jAnimalcopy(*j);
const Dog* jDog = dynamic_cast<const Dog*>(j); // Cast j to Dog pointer
const Dog jDogcopy(*jDog);
const Animal* i = new Cat();
const WrongAnimal* base = new WrongAnimal();
const WrongCat* l = new WrongCat();
Cat	iCat;
Cat iAssignedCat;
iAssignedCat = iCat;

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << l->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
l->makeSound();
jAnimalcopy.makeSound();
jDogcopy.makeSound();
iAssignedCat.makeSound();
meta->makeSound();
base->makeSound();

delete meta;
delete base;
delete i;
delete j;
delete l;

return 0;
}
