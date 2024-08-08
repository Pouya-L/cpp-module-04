/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:38:03 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 15:48:54 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong cat")
{
	std::cout << "WrongCat: Constructor for " << _type << " called" << std::endl;
}

WrongCat::WrongCat(WrongCat& otherWrongCat) : WrongAnimal(otherWrongCat)
{
	std::cout << "WrongCat: Copy constructor for " << _type << " called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat& otherWrongCat)
{
	if (this != &otherWrongCat) {
		WrongAnimal::operator=(otherWrongCat);
		std::cout << "WrongCat: Assignment operator for " << _type << " called" << std::endl;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Deconstructor for " << _type << " called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Moo Moo 🐮" << std::endl;
}
