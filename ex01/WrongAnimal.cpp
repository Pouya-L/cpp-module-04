/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:21:05 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 15:32:36 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Uknown wrong animal")
{
	std::cout << "WrongAnimal: Constructor for " << _type << " called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal: Constructor for " << _type << " called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& otherWrongAnimal)
{
	*this = otherWrongAnimal;
	std::cout << "WrongAnimal: Copy constructor for " << _type << " called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& otherWrongAnimal)
{
	if (this != &otherWrongAnimal)
		this->_type = otherWrongAnimal._type;
	std::cout << "WrongAnimal: Assignment operator called for " << this->_type << " called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Deconstructor for " << _type << " called" << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal: makeSound for " << _type << " called" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return _type;
}
