/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:03:28 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/07 13:16:44 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Unkown type") , _brain(NULL)
{
	std::cout << "AAnimal: Constructor for " << _type << " called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type), _brain(NULL)
{
	std::cout << "AAnimal: Constructor for " << _type << " called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& otherAAnimal)
{
	*this = otherAAnimal;
	std::cout << "AAnimal: Copy constructor for " << _type << " called" << std::endl;
}

/**
 * Deleting _brain in the assignment operator is necessary to avoid memory leaks and
 * ensure proper memory management. Here’s a detailed explanation:
 */
AAnimal& AAnimal::operator=(const AAnimal& otherAAnimal)
{
	if (this != &otherAAnimal) {
		this->_type = otherAAnimal._type;
		if (this->_brain)
			delete this->_brain;
		if (otherAAnimal._brain)
			this->_brain = new Brain(*otherAAnimal._brain);
		else
			this->_brain = NULL;
		std::cout << "AAnimal: Assignment operator called for " << this->_type << " called" << std::endl;
	}
	return *this;
}

AAnimal::~AAnimal()
{
	if (_brain)
		delete _brain;
	std::cout << "AAnimal: Deconstructor for " << _type << " called" << std::endl;
}

// Remove the implementation of makeSound as it is now a pure virtual function
/* void		AAnimal::makeSound( void ) const
{
	std::cout << "AAnimal: makeSound for " << _type << " called" << std::endl;
} */

std::string	AAnimal::getType( void ) const
{
	return _type;
}

Brain*		AAnimal::getBrain( void ) const
{
	return _brain;
}
