/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:03:28 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 17:47:51 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Unkown type") , _brain(NULL)
{
	std::cout << "Animal: Constructor for " << _type << " called" << std::endl;
}

Animal::Animal(std::string type) : _type(type), _brain(NULL)
{
	std::cout << "Animal: Constructor for " << _type << " called" << std::endl;
}

Animal::Animal(const Animal& otherAnimal)
{
	*this = otherAnimal;
	std::cout << "Animal: Copy constructor for " << _type << " called" << std::endl;
}

/**
 * Deleting _brain in the assignment operator is necessary to avoid memory leaks and
 * ensure proper memory management. Here’s a detailed explanation:
 */
Animal& Animal::operator=(const Animal& otherAnimal)
{
	if (this != &otherAnimal) {
		this->_type = otherAnimal._type;
		if (this->_brain)
			delete this->_brain;
		if (otherAnimal._brain)
			this->_brain = new Brain(*otherAnimal._brain);
		else
			this->_brain = NULL;
		std::cout << "Animal: Assignment operator called for " << this->_type << " called" << std::endl;
	}
	return *this;
}

Animal::~Animal()
{
	if (_brain)
		delete _brain;
	std::cout << "Animal: Deconstructor for " << _type << " called" << std::endl;
}

void		Animal::makeSound( void ) const
{
	std::cout << "Animal: makeSound for " << _type << " called" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return _type;
}

Brain*		Animal::getBrain( void ) const
{
	return _brain;
}
