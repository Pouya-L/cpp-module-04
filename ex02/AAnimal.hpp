/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:05:27 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/07 13:09:23 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AANIMAL_HPP
#define	AANIMAL_HPP

#include "Brain.hpp"
#include <iomanip>
#include <iostream>
#include <string>


/**
 * The task requires we to make the Animal class abstract so that it cannot be instantiated directly.
 * This is a common practice in object-oriented programming to ensure that only
 * derived classes (like Dog and Cat) can be instantiated, not the base class itself.
 *
 * * Abstract Class: An abstract class is a class that cannot be instantiated on its own.
 * It is meant to be a base class for other classes. In C++,
 * we can make a class abstract by declaring at least one pure virtual function.
 *
 * * Pure Virtual Function: A pure virtual function is a function that has no implementation
 * in the base class and must be overridden in derived classes.
 * It is declared by assigning 0 to the function declaration.
 */
class	AAnimal {
protected:
	std::string	_type;
	Brain		*_brain;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& otherAAnimal);
	AAnimal& operator=(const AAnimal& otherAAnimal);
	virtual	~AAnimal();

	virtual void	makeSound( void ) const = 0;
	std::string		getType( void ) const;
	Brain*			getBrain( void ) const;
};

#endif
