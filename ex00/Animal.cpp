/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:03:28 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 15:09:29 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Unkown type")
{
	std::cout << "Animal: Constructor for " << _type << " called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal: Constructor for " << _type << " called" << std::endl;
}

Animal::Animal(const Animal& otherAnimal)
{
	*this = otherAnimal;
	std::cout << "Animal: Copy constructor for " << _type << " called" << std::endl;
}

Animal& Animal::operator=(const Animal& otherAnimal)
{
	if (this != &otherAnimal)
		this->_type = otherAnimal._type;
	std::cout << "Animal: Assignment operator called for " << this->_type << " called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal: Deconstructor for " << _type << " called" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal: makeSound for " << _type << " called" << std::endl;
}

std::string Animal::getType( void ) const
{
	return _type;
}
