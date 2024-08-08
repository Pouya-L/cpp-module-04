/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:39:13 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 16:43:41 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	_brain = new Brain();
	std::cout << "Dog: Constructor for " << _type << " called" << std::endl;
}

Dog::Dog(const Dog& otherDog) : Animal(otherDog)
{
	std::cout << "Dog: Copy constructor for " << _type << " called" << std::endl;
}

/**
 * Calling Base Class Assignment Operator: Ensures that the base class part of the object
 * is correctly assigned when implementing the assignment operator for a derived class.
 */
Dog&	Dog::operator=(const Dog& otherDog)
{
	if (this != &otherDog)
	{
		Animal::operator=(otherDog);
		std::cout << "Dog: Assignment operator called for " << _type << " called" << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog: Deconstructor for " << _type << " called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof Woof 🐶" << std::endl;
}
