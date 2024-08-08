/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:58:28 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/07 13:18:18 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	_brain = new Brain();
	std::cout << "Cat: Constructor for " << _type << " called" << std::endl;
}

Cat::Cat(const Cat& otherCat) : AAnimal(otherCat)
{
	std::cout << "Cat: Copy constructor for " << _type << " called" << std::endl;
}

Cat& Cat::operator=(const Cat& otherCat)
{
	if (this != &otherCat)
	{
		AAnimal::operator=(otherCat);
		std::cout << "Cat: Assignment operator called for " << _type << " called" << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: Deconstructor for " << _type << " called" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow Meow 😸" << std::endl;
}
