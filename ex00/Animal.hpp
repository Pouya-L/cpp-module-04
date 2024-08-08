/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:58:40 by plashkar          #+#    #+#             */
/*   Updated: 2024/08/06 15:14:19 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define	ANIMAL_HPP

#include <iomanip>
#include <iostream>
#include <string>

/**
 * The makeSound method in the Animal class is marked as virtual to allow derived classes,
 * like Dog, Cat, etc. to override it. This enables polymorphism,
 * where the method that gets called is determined at runtime based on the actual type of the object,
 * not the type of the pointer or reference to the object.
 */
class	Animal {
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& otherAnimal);
	Animal& operator=(const Animal& otherAnimal);
	virtual	~Animal();

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const;
};

#endif
